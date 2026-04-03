# Quick Start Guide

This guide will help you get started with tree-sitter-whistle.

## Installation

### Step 1: Install tree-sitter-cli

```bash
npm install -g tree-sitter-cli
```

### Step 2: Navigate to the project

```bash
cd tree-sitter-whistle
```

### Step 3: Install dependencies

```bash
npm install
```

### Step 4: Generate the parser

```bash
tree-sitter generate
```

This will create the parser C code in the `src/` directory.

## Testing

### Run all tests

```bash
tree-sitter test
```

You should see output like:

```
  patterns:
    ✓ Simple comment
    ✓ Simple rule with file protocol
    ✓ Wildcard pattern
    ✓ Regular expression pattern
    ...

  operators:
    ✓ Request header modification
    ✓ Response body replacement
    ...

  plugins:
    ✓ Plugin with full name
    ✓ Plugin variable with equals
    ...
```

### Parse an example file

```bash
tree-sitter parse examples/basic.w2
```

This will show you the syntax tree:

```
(source_file
  (comment)
  (rule
    pattern: (domain_pattern)
    operator: (protocol_operator
      protocol: (protocol_name)
      value: (operator_value)))
  ...
)
```

### Test syntax highlighting

```bash
tree-sitter highlight examples/basic.w2
```

This will show colored output based on the highlight queries.

## Using in Your Editor

### Neovim

1. Create a queries directory in your Neovim config:

```bash
mkdir -p ~/.config/nvim/queries/whistle
```

2. Copy the highlight queries:

```bash
cp queries/highlights.scm ~/.config/nvim/queries/whistle/highlights.scm
```

3. Add to your Neovim config:

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

parser_config.whistle = {
  install_info = {
    url = "~/path/to/tree-sitter-whistle",
    files = {"src/parser.c"},
  },
  filetype = "whistle",
}

-- Set filetype for .w2 and .whistle files
vim.filetype.add({
  extension = {
    w2 = "whistle",
    whistle = "whistle",
  },
})
```

4. Install the parser:

```vim
:TSInstall whistle
```

5. Open a Whistle rules file and enjoy syntax highlighting!

### VSCode

1. Install the vscode-tree-sitter extension

2. Add to your `settings.json`:

```json
{
  "tree-sitter.grammars": [
    {
      "name": "whistle",
      "scope": "source.whistle",
      "path": "/absolute/path/to/tree-sitter-whistle"
    }
  ],
  "files.associations": {
    "*.w2": "whistle",
    "*.whistle": "whistle"
  }
}
```

## Writing Rules

### Basic Syntax

A Whistle rule consists of a **pattern** and one or more **operators**:

```whistle
pattern operator [operator2 ...]
```

### Examples

#### Map a domain to a local file:

```whistle
www.example.com file:///path/to/index.html
```

#### Use a wildcard pattern:

```whistle
*.example.com proxy://127.0.0.1:8080
```

#### Use a regular expression:

```whistle
/^https?:\/\/api\.example\.com/i https://test-api.com
```

#### Multiple operators:

```whistle
*.example.com reqHeaders://{req.json} resHeaders://{res.json}
```

#### Comments:

```whistle
# This is a comment
www.example.com file:///path/to/file  # Inline comment not supported
```

#### Negation:

```whistle
!www.example.com disable://cache
```

## Next Steps

- Check out the [full README](README.md) for detailed documentation
- Browse [examples/basic.w2](examples/basic.w2) for more examples
- Read the [Whistle documentation](https://wproxy.org/whistle/rules/) for protocol reference
- Explore the [test cases](test/corpus/) to understand grammar details

## Troubleshooting

### Parser generation fails

Make sure you have:
- Node.js >= 12 installed
- tree-sitter-cli installed globally
- Run `npm install` to get dependencies

### Tests fail

- Check that you ran `tree-sitter generate` first
- Make sure the grammar.js syntax is valid
- Try `tree-sitter generate --log` for detailed output

### Highlighting doesn't work in editor

- Verify the parser is compiled: `ls src/parser.c`
- Check that queries/highlights.scm exists
- Make sure your editor's tree-sitter plugin is configured correctly
- Try restarting your editor

## Getting Help

- Check the [tree-sitter documentation](https://tree-sitter.github.io/tree-sitter/)
- Read the [Whistle documentation](https://wproxy.org/whistle/)
- Open an issue in the repository

## Contributing

Contributions are welcome! See [README.md](README.md#contributing) for guidelines.
