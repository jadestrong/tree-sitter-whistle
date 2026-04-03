# Tree-sitter Whistle

A tree-sitter grammar for [Whistle](https://github.com/avwo/whistle) rules syntax.

## Overview

This grammar provides syntax highlighting and parsing for Whistle proxy tool rule files. It enables advanced editor features like syntax highlighting, code navigation, and error detection in editors that support tree-sitter (Neovim, Emacs, Atom, etc.).

## Features

- ✅ **Complete syntax coverage** - Supports all Whistle rule patterns and operators
- ✅ **Pattern matching** - RegExp, wildcards, IP addresses, ports, paths
- ✅ **Protocol operators** - All built-in protocols (file, proxy, host, req*, res*, etc.)
- ✅ **Plugin support** - Full plugin syntax including variables
- ✅ **Syntax highlighting** - Semantic highlighting based on token types
- ✅ **Incremental parsing** - Fast re-parsing on edits
- ✅ **Error recovery** - Continues parsing after syntax errors

## Installation

### Prerequisites

- Node.js >= 12
- tree-sitter-cli: `npm install -g tree-sitter-cli`

### Building

```bash
cd tree-sitter-whistle

# Install dependencies
npm install

# Generate parser
tree-sitter generate

# Run tests
tree-sitter test

# Parse example file
tree-sitter parse examples/basic.w2

# Test highlighting
tree-sitter highlight examples/basic.w2
```

## Editor Integration

### Neovim (nvim-treesitter)

1. Add to your tree-sitter config:

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

parser_config.whistle = {
  install_info = {
    url = "~/path/to/tree-sitter-whistle",
    files = {"src/parser.c"},
    branch = "main",
  },
  filetype = "whistle",
}

-- Associate file extensions
vim.filetype.add({
  extension = {
    w2 = "whistle",
    whistle = "whistle",
  },
})
```

2. Install and use:

```vim
:TSInstall whistle
:TSEnable highlight
```

### VSCode

Use with [vscode-tree-sitter](https://marketplace.visualstudio.com/items?itemName=georgewfraser.vscode-tree-sitter):

1. Install the extension
2. Add to settings.json:

```json
{
  "tree-sitter.grammars": [
    {
      "name": "whistle",
      "scope": "source.whistle",
      "path": "/path/to/tree-sitter-whistle"
    }
  ],
  "files.associations": {
    "*.w2": "whistle",
    "*.whistle": "whistle"
  }
}
```

### Emacs (tree-sitter-mode)

```elisp
(add-to-list 'tree-sitter-load-path "/path/to/tree-sitter-whistle")

(add-to-list 'tree-sitter-major-mode-language-alist
             '(whistle-mode . whistle))

(add-to-list 'auto-mode-alist '("\\.w2\\'" . whistle-mode))
```

## Syntax Guide

### Pattern Types

```whistle
# Domain patterns
www.example.com file:///path/to/file

# Wildcard patterns
*.example.com proxy://127.0.0.1:8080
~example.com file:///path/to/file

# Regular expressions
/^https?:\/\/api\.example\.com/i https://test-api.com
$api\.example\.com file:///path/to/mock.json

# IP addresses
127.0.0.1:8080 enable://capture
[::1]:8080 proxy://localhost:9090

# Port patterns
:8080 proxy://127.0.0.1:9090

# Path patterns
/path/to/file file:///local/file
C:\Windows\file.txt file:///remote/file

# Macros and references
{macro} file:///path
@reference http://example.com
```

### Operator Categories

#### Map Local
```whistle
example.com file:///path/to/file.html
example.com tpl:///path/to/template.tpl
example.com rawfile:///path/to/data.bin
```

#### Map Remote
```whistle
example.com https://remote-server.com
example.com ws://websocket-server.com
```

#### Proxy
```whistle
example.com proxy://127.0.0.1:8080
example.com socks://127.0.0.1:1080
example.com pac://{proxy.pac}
```

#### Request Modification
```whistle
example.com reqHeaders://{headers.json}
example.com method://POST
example.com ua://Custom-Agent
example.com reqBody://{body.json}
```

#### Response Modification
```whistle
example.com resHeaders://{headers.json}
example.com resBody://{response.json}
example.com statusCode://404
example.com redirect://https://new-url.com
```

#### Content Injection
```whistle
example.com htmlAppend://{footer.html}
example.com jsBody://{app.js}
example.com cssAppend://{styles.css}
```

#### Control Flow
```whistle
example.com enable://capture
example.com disable://cache
example.com filter://keyword
example.com ignore://
```

#### Plugins
```whistle
%plugin=config.json
example.com whistle.inspect://
example.com plugin.vase://{config.json}
example.com pipe://custom-plugin
```

## Grammar Structure

```
source_file
  └── rule*
       ├── negation? (!)
       ├── pattern
       │    ├── regexp_pattern
       │    ├── wildcard_pattern
       │    ├── ip_pattern
       │    ├── domain_pattern
       │    └── ...
       └── operator+
            ├── protocol_operator
            │    ├── protocol_name
            │    └── operator_value?
            ├── plugin_operator
            │    ├── plugin_name
            │    └── operator_value?
            └── simple_value
```

## Testing

Run the test suite:

```bash
# Run all tests
npm test

# Run specific test file
tree-sitter test -f patterns

# Update test snapshots
tree-sitter test -u
```

Test files are located in `test/corpus/`:
- `patterns.txt` - Pattern matching tests
- `operators.txt` - Protocol operator tests
- `plugins.txt` - Plugin syntax tests

## Development

### Project Structure

```
tree-sitter-whistle/
├── grammar.js              # Grammar definition
├── src/                    # Generated parser (C code)
├── queries/
│   └── highlights.scm      # Syntax highlighting queries
├── test/
│   └── corpus/             # Test cases
├── examples/               # Example rule files
├── bindings/
│   ├── node/              # Node.js bindings
│   └── rust/              # Rust bindings
└── package.json
```

### Adding New Features

1. Update `grammar.js` with new rules
2. Add highlighting in `queries/highlights.scm`
3. Add test cases in `test/corpus/`
4. Run `tree-sitter generate`
5. Run `tree-sitter test`

### Debugging

```bash
# Show parse tree
tree-sitter parse examples/basic.w2

# Show syntax tree with details
tree-sitter parse examples/basic.w2 --debug

# Test specific pattern
echo "example.com file:///path" | tree-sitter parse -
```

## Protocol Reference

Based on Whistle's protocol implementation:

### Built-in Protocols

- **Map Local**: file, xfile, tpl, xtpl, rawfile, xrawfile
- **Map Remote**: http, https, ws, wss, tunnel
- **Proxy**: proxy, xproxy, http-proxy, https-proxy, socks, xsocks, pac
- **Host**: host, xhost, head
- **Request**: reqHeaders, method, ua, auth, reqBody, reqDelay, reqSpeed, etc.
- **Response**: resHeaders, resBody, statusCode, resDelay, resSpeed, etc.
- **Injection**: htmlAppend, htmlPrepend, htmlBody, jsAppend, cssAppend, etc.
- **Control**: enable, disable, filter, ignore, skip, delete
- **Tools**: weinre, log, style
- **Special**: headerReplace, cipher, tlsOptions, pipe, sniCallback

See [Whistle Documentation](https://wproxy.org/whistle/rules/) for complete protocol reference.

## Contributing

Contributions are welcome! Please:

1. Add tests for new features
2. Update documentation
3. Follow existing code style
4. Run tests before submitting

## License

MIT License - see LICENSE file for details

## Related Projects

- [Whistle](https://github.com/avwo/whistle) - HTTP, HTTP2, HTTPS, Websocket debugging proxy
- [tree-sitter](https://tree-sitter.github.io/) - Parser generator tool

## Credits

Grammar based on the CodeMirror mode implementation in Whistle:
- `biz/webui/htdocs/src/js/rules-mode.js`
- `biz/webui/htdocs/src/js/protocols.js`
