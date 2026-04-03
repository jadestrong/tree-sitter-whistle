/**
 * Tree-sitter grammar for Whistle rules
 * Based on rules-mode.js syntax highlighting implementation
 */

// Protocol names pattern
const PROTOCOL_NAMES = [
  // Map Local
  'x?(?:file|tpl|rawfile)',
  // Map Remote (web protocols)
  'https?', 'wss?', 'tunnel',
  // Proxy
  'x?(?:proxy|http-proxy|https-proxy|http2https-proxy|https2http-proxy|internal-proxy|internal-http-proxy|internal-https-proxy|socks)',
  'pac',
  // Host
  'x?hosts?', 'head',
  // Request modifiers
  'referer', 'auth', 'ua', 'forwardedFor', 'reqCookies', 'reqDelay', 'reqSpeed', 'reqCors', 'reqHeaders', 'method', 'reqType', 'reqCharset', 'reqBody', 'reqPrepend', 'reqAppend', 'reqReplace', 'reqWrite', 'reqWriteRaw', 'reqScript', 'reqRules', 'reqMerge',
  // URL manipulation
  'urlParams', 'params', 'urlReplace', 'pathReplace',
  // Response modifiers
  'resScript', 'frameScript', 'resRules', 'responseFor', 'resCookies', 'resHeaders', 'trailers', 'replaceStatus', 'resDelay', 'resSpeed', 'resCors', 'resType', 'resCharset', 'cache', 'attachment', 'download', 'resBody', 'resPrepend', 'resAppend', 'resReplace', 'resMerge', 'resWrite', 'resWriteRaw',
  // Content injection
  '(?:html|css|js)(?:Append|Prepend|Body)',
  // Control flow
  'excludeFilter', 'includeFilter', 'filter', 'ignore', 'skip', 'enable', 'disable', 'delete', 'lineProps',
  // Tools
  'weinre', 'log', 'style',
  // Special
  'headerReplace', 'cipher', 'tlsOptions', 'pipe', 'sniCallback',
  // Inner rules
  'redirect', 'locationHref', 'statusCode'
].join('|');

module.exports = grammar({
  name: 'whistle',

  extras: $ => [
    /[ \t]/  // Only spaces and tabs, not newlines
  ],

  rules: {
    source_file: $ => repeat($._line),

    _line: $ => choice(
      $.comment,
      $.rule,
      /\r?\n/
    ),

    // Comments start with #
    comment: $ => token(seq('#', /.*/)),

    // Rule: [!]pattern operator [operator2 ...]
    rule: $ => seq(
      optional(field('negation', $.negation)),
      field('pattern', $._pattern),
      repeat1(field('operator', $._operator)),
      optional('\r'),
      optional('\n')
    ),

    negation: $ => '!',

    // ========== Pattern Definitions ==========
    _pattern: $ => choice(
      $.regexp_pattern,
      $.regexp_pattern_no_flag,
      $.dollar_regexp,
      $.port_pattern,
      $.url_pattern,
      $.wildcard_pattern,
      $.ipv6_with_brackets,
      $.ipv4_pattern,
      $.ipv6_pattern,
      $.local_path_windows,
      $.local_path_unix,
      $.macro_pattern,
      $.at_reference,
      $.plugin_var,
      $.domain_pattern
    ),

    // Regular expression: /pattern/i (with i flag - unambiguous)
    regexp_pattern: $ => token(prec(5,
      seq('/', /(?:[^/\n\\]|\\.)+/, '/', 'i')
    )),

    // Regexp without i flag: /pattern/ - lower priority than unix path
    // Unix paths like /usr/local/file will be matched by local_path_unix first
    regexp_pattern_no_flag: $ => token(prec(1,
      /\/(?:[^/\n\\]|\\.)+\//
    )),

    // Dollar regexp: $pattern
    dollar_regexp: $ => token(
      seq('$', /[^\s#]+/)
    ),

    // Port pattern: :8080
    port_pattern: $ => token(/:\d{1,5}/),

    // URL pattern starting with ^
    url_pattern: $ => token(/\^[^\s#]+/),

    // Wildcard pattern (contains * or ~ or starts with .)
    wildcard_pattern: $ => token(
      choice(
        // Protocol with wildcard: http://*.example.com
        /(?:\$?(?:https?:|wss?:|tunnel:)?\/\/)[^\s#]*[*~][^\s#]*/,
        // Domain wildcard: *.example.com or ~example.com
        /[^\s#/]*[*~][^\s#]*/,
        // Dot domain: .example.com
        /\.[^.\s#/?]+\.[^\s#/?]+/
      )
    ),

    // IPv6 with brackets: [::1]:8080
    ipv6_with_brackets: $ => token(
      /\[[\da-f:]+\](?::\d+)?/i
    ),

    // IPv4 pattern: 127.0.0.1:8080
    ipv4_pattern: $ => token(
      /(?:::(?:ffff:)?)?(?:(?:25[0-5]|2[0-4]\d|1\d{2}|[1-9]?\d)\.){3}(?:25[0-5]|2[0-4]\d|1\d{2}|[1-9]?\d)(?::\d+)?/
    ),

    // IPv6 pattern: 2001:db8::1
    ipv6_pattern: $ => token(
      choice(
        /[\da-f]{1,4}(?::[\da-f]{1,4}){7}/i,           // Full form
        /[\da-f]{1,4}(?::[\da-f]{1,4}){0,6}::/i,       // With :: at end
        /::[\da-f]{1,4}(?::[\da-f]{1,4}){0,6}/i,       // With :: at start
        /[\da-f]{1,4}(?::[\da-f]{1,4}){0,5}::[\da-f]{1,4}(?::[\da-f]{1,4}){0,5}/i  // :: in middle
      )
    ),

    // Windows path: C:\ or C:/ (highest priority to match before domain_pattern)
    local_path_windows: $ => token(prec(10,
      /[A-Za-z]:[\\\/][^\s#]*/
    )),

    // Unix path: /path/to/file (must have at least /x/ pattern to distinguish from regex)
    // Higher priority than regexp to ensure paths like /usr/local/file are matched correctly
    local_path_unix: $ => token(prec(5,
      /\/[^\s#/]+\/[^\s#]*/
    )),

    // Macro/Group: {xxx}, <xxx>, (xxx)
    macro_pattern: $ => token(
      choice(
        /\{[^}\s]+\}/,
        /<[^>\s]+>/,
        /\([^)\s]+\)/
      )
    ),

    // Reference: @name
    at_reference: $ => token(/@[^\s#]+/),

    // Plugin variable: %plugin=value or %plugin.key
    plugin_var: $ => token(/%[a-z\d_-]+[=.][^\s#]*/i),

    // Domain pattern (fallback) - must not start with ! (negation prefix)
    domain_pattern: $ => token(/[^\s#:!][^\s#:]*/),

    // ========== Operator Definitions ==========
    _operator: $ => choice(
      $.protocol_operator,
      $.plugin_operator,
      $.simple_value
    ),

    // Protocol operator: protocol://value (as a single token with high priority)
    protocol_operator: $ => prec.right(seq(
      field('protocol', $.protocol_name),
      token.immediate('://'),
      optional(field('value', $.operator_value))
    )),

    // Protocol names
    protocol_name: $ => token(prec(2, new RegExp(PROTOCOL_NAMES))),

    // Plugin operator: plugin.xxx:// or whistle.xxx://
    plugin_operator: $ => prec.right(seq(
      field('plugin', $.plugin_full_name),
      token.immediate('://'),
      optional(field('value', $.operator_value))
    )),

    plugin_full_name: $ => token(prec(4, /(?:plugin|whistle)\.[a-z\d_-]+/i)),

    // Operator value (everything until space or comment) - highest priority when immediately after ://
    operator_value: $ => token.immediate(prec(10, /[^\s#]+/)),

    // Simple value (fallback for any token) - lowest priority
    simple_value: $ => token(prec(-1, /[^\s#]+/))
  }
});
