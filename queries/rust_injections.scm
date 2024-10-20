;; Rust uses formatted strings in the following macros:
;; - format family of macros: https://doc.rust-lang.org/std/fmt/index.html#related-macros
;;   - format!
;;   - write!
;;   - writeln!
;;   - print!
;;   - println!
;;   - eprint!
;;   - eprintln!
;;   - format_args!
;; - assert macros: https://doc.rust-lang.org/std/macro.assert.html#custom-messages
;;   - assert!
;;   - assert_eq!
;;   - assert_ne!
;;   - assert_matches!
;;   - debug_assert!
;;   - debug_assert_eq!
;;   - debug_assert_ne!
;;   - debug_assert_matches!

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
