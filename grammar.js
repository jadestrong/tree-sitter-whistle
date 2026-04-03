/**
 * Tree-sitter grammar for Whistle rules
 * Based on rules-mode.js syntax highlighting implementation
 */

module.exports = grammar({
  name: 'whistle',

  extras: $ => [
    /\s/
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
      optional($.negation),
      $.pattern,
      repeat1($.operator),
      optional('\r'),
      optional('\n')
    ),

    negation: $ => '!',

    // ========== Pattern Definitions ==========
    pattern: $ => choice(
      $.regexp_pattern,
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

    // Regular expression: /pattern/ or /pattern/i
    regexp_pattern: $ => token(
      seq('/', /[^/\n]+/, '/', optional('i'))
    ),

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

    // Windows path: C:\ or C:/
    local_path_windows: $ => token(
      /[a-z]:(?:\\|\/(?!\/))[^\s#]*/i
    ),

    // Unix path: /path/to/file
    local_path_unix: $ => token(
      /\/[^/\s#][^\s#]*/
    ),

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
    plugin_var: $ => token(/%[a-z\d_-]+[=.][^\s#]*/),

    // Domain pattern (fallback)
    domain_pattern: $ => token(/[^\s#:]+/),

    // ========== Operator Definitions ==========
    operator: $ => choice(
      $.protocol_operator,
      $.plugin_operator,
      $.simple_value
    ),

    // Protocol operator: protocol://value
    protocol_operator: $ => seq(
      field('protocol', $.protocol_name),
      '://',
      optional(field('value', $.operator_value))
    ),

    // Protocol names
    protocol_name: $ => token(
      choice(
        // Map Local
        /x?(?:file|tpl|rawfile)/,

        // Map Remote (web protocols)
        /https?|wss?|tunnel/,

        // Proxy
        /x?(?:proxy|http-proxy|https-proxy|http2https-proxy|https2http-proxy|internal-proxy|internal-http-proxy|internal-https-proxy|socks)/,
        /pac/,

        // Host
        /x?hosts?/,
        /head/,

        // Request modifiers
        /referer|auth|ua|forwardedFor|reqCookies|reqDelay|reqSpeed|reqCors|reqHeaders|method|reqType|reqCharset|reqBody|reqPrepend|reqAppend|reqReplace|reqWrite|reqWriteRaw|reqScript|reqRules|reqMerge/,

        // URL manipulation
        /urlParams|params|urlReplace|pathReplace/,

        // Response modifiers
        /resScript|frameScript|resRules|responseFor|resCookies|resHeaders|trailers|replaceStatus|resDelay|resSpeed|resCors|resType|resCharset|cache|attachment|download|resBody|resPrepend|resAppend|resReplace|resMerge|resWrite|resWriteRaw/,

        // Content injection
        /(?:html|css|js)(?:Append|Prepend|Body)/,

        // Control flow
        /excludeFilter|includeFilter|filter|ignore|skip|enable|disable|delete|lineProps/,

        // Tools
        /weinre|log|style/,

        // Special
        /headerReplace|cipher|tlsOptions|pipe|sniCallback/,

        // Inner rules
        /redirect|locationHref|statusCode/
      )
    ),

    // Plugin operator: plugin.xxx:// or whistle.xxx:// or shortname://
    plugin_operator: $ => seq(
      field('plugin', choice(
        $.plugin_full_name,
        $.plugin_short_name
      )),
      '://',
      optional(field('value', $.operator_value))
    ),

    plugin_full_name: $ => token(/(?:plugin|whistle)\.[a-z\d_-]+/),
    plugin_short_name: $ => token(/[a-z\d_-]+/),

    // Operator value (everything until space or comment)
    operator_value: $ => token(/[^\s#]+/),

    // Simple value (fallback for any token)
    simple_value: $ => token(/[^\s#]+/)
  }
});
