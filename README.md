# tree-sitter-format-string

[![CI][ci]](https://github.com/ValdezFOmar/tree-sitter-format-string/actions/workflows/ci.yml)
[![discord][discord]](https://discord.gg/w7nTvsVJhm)
[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)
<!-- NOTE: uncomment these if you're publishing packages: -->
<!-- [![npm][npm]](https://www.npmjs.com/package/tree-sitter-format-string) -->
<!-- [![crates][crates]](https://crates.io/crates/tree-sitter-format-string) -->
<!-- [![pypi][pypi]](https://pypi.org/project/tree-sitter-format-string/) -->

A tree-sitter parser for format strings using curly braces (`{}`),
like python's `str.format` method or rust's `format!` macro.

## Injections

### Python

Python only uses formatted strings in the `str.format` method, commonly
used like this:

```python
'Hello {}'.format('world')
'{:.4f}'.format(math.pi)
```

Query for `tree-sitter-python`'s `injections.scm`:

```query
((call
  function: (attribute
    object: (string
      (string_content) @injection.content)
    attribute: (identifier) @_format))
  (#eq? @_format "format")
  (#set! injection.language "format_string"))
```

### Rust

Rust uses formatted strings in the following macros:

- `format!`
- `write!`
- `writeln!`
- `print!`
- `println!`
- `eprint!`
- `eprintln!`
- `format_args!`
- `assert!`
- `assert_eq!`
- `assert_ne!`
- `assert_matches!`
- `debug_assert!`
- `debug_assert_eq!`
- `debug_assert_ne!`
- `debug_assert_matches!`

Queries for `tree-sitter-rust`'s `injections.scm`:

```query
((macro_invocation
  macro: (identifier) @_macro
  (token_tree
    .
    (string_literal
      (string_content) @injection.content)))
  (#any-of? @_macro "print" "println" "eprint" "eprintln" "format" "format_args")
  (#set! injection.language "format_string"))

((macro_invocation
  macro: (identifier) @_macro
  (token_tree
    .
    (_)
    .
    (string_literal
      (string_content) @injection.content)))
  (#any-of? @_macro "write" "writeln" "assert" "debug_assert")
  (#set! injection.language "format_string"))

((macro_invocation
  macro: (identifier) @_macro
  (token_tree
    .
    (_)
    .
    (_)
    .
    (string_literal
      (string_content) @injection.content)))
  (#any-of? @_macro
    "assert_eq"
    "assert_ne"
    "assert_matches"
    "debug_assert_eq"
    "debug_assert_ne"
    "debug_assert_matches")
  (#set! injection.language "format_string"))
```

## References

- [Rust format syntax](https://doc.rust-lang.org/std/fmt/#syntax)
- [Python format syntax](https://docs.python.org/3/library/string.html#format-string-syntax)
- Other languages?

[ci]: https://img.shields.io/github/actions/workflow/status/ValdezFOmar/tree-sitter-format-string/ci.yml?logo=github&label=CI
[discord]: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord
[matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix
[npm]: https://img.shields.io/npm/v/tree-sitter-format-string?logo=npm
[crates]: https://img.shields.io/crates/v/tree-sitter-format-string?logo=rust
[pypi]: https://img.shields.io/pypi/v/tree-sitter-format-string?logo=pypi&logoColor=ffd242
