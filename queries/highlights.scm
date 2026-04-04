; ========================================
; Whistle Rules Syntax Highlighting
; ========================================

; Comments
(comment) @comment

; ========================================
; Patterns
; ========================================

; Negation operator
(negation) @operator

; Regular expressions
(regexp_pattern) @string.regexp
(regexp_pattern_no_flag) @string.regexp
(dollar_regexp) @string.regexp

; Special patterns
(wildcard_pattern) @string.special
(url_pattern) @string.special
(port_pattern) @constant.numeric

; IP addresses
(ipv4_pattern) @constant.numeric
(ipv6_pattern) @constant.numeric
(ipv6_with_brackets) @constant.numeric

; Paths
(local_path_windows) @string.special.path
(local_path_unix) @string.special.path

; Macros and references
(macro_pattern) @keyword
(at_reference) @variable.parameter

; Plugin variables
(plugin_var) @variable.builtin

; Domain patterns
(domain_pattern) @string

; ========================================
; Operators
; ========================================

; Protocol separator
"://" @punctuation.delimiter

; ========================================
; Protocol Categories
; ========================================

; Map Local (file operations)
((protocol_name) @type.builtin
  (#match? @type.builtin "^x?(file|tpl|rawfile)$"))

; Map Remote (web protocols)
((protocol_name) @keyword.directive
  (#match? @keyword.directive "^(https?|wss?|tunnel)$"))

; Proxy protocols
((protocol_name) @keyword.directive
  (#match? @keyword.directive "^x?(proxy|.*-proxy|socks|pac)$"))

; Host protocols
((protocol_name) @type.builtin
  (#match? @type.builtin "^x?hosts?$"))

((protocol_name) @type.builtin
  (#match? @type.builtin "^head$"))

; Request modifiers
((protocol_name) @attribute
  (#match? @attribute "^(referer|auth|ua|forwardedFor|reqCookies|reqHeaders|method|reqType|reqCharset|reqBody|reqPrepend|reqAppend|reqReplace|reqWrite|reqWriteRaw|reqScript|reqRules|reqMerge|urlParams|params|urlReplace|pathReplace|reqDelay|reqSpeed|reqCors)$"))

; Response modifiers
((protocol_name) @property
  (#match? @property "^(resScript|frameScript|resRules|responseFor|resCookies|resHeaders|trailers|replaceStatus|resDelay|resSpeed|resCors|resType|resCharset|cache|attachment|download|resBody|resPrepend|resAppend|resReplace|resMerge|resWrite|resWriteRaw)$"))

; Content injection (HTML/CSS/JS)
((protocol_name) @function.special
  (#match? @function.special "^(html|css|js)(Append|Prepend|Body)$"))

; Control flow
((protocol_name) @keyword.control
  (#match? @keyword.control "^(excludeFilter|includeFilter|filter|ignore|skip|enable|disable|delete|lineProps)$"))

; Tools
((protocol_name) @function.special
  (#match? @function.special "^(weinre|log|style)$"))

; Special protocols
((protocol_name) @keyword.directive
  (#match? @keyword.directive "^(headerReplace|cipher|tlsOptions|pipe|sniCallback)$"))

; Inner rules
((protocol_name) @keyword.directive
  (#match? @keyword.directive "^(redirect|locationHref|statusCode)$"))

; Default protocol highlighting
(protocol_name) @function.builtin

; ========================================
; Plugins
; ========================================

; Plugin operators
(plugin_full_name) @namespace

; ========================================
; Values
; ========================================

; Value references - braces highlighted as punctuation
(brace_open) @punctuation.bracket
(brace_close) @punctuation.bracket

; Reference name inside braces
(reference_name) @variable

; Plain text values
(value_text_start) @string
(value_text) @string

; Simple values
(simple_value) @string
