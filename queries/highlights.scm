(identifier) @variable

(attribute_expression
  attribute: (identifier) @variable.member)

(integer) @number

(item_string) @string

(conversion) @function.macro

; Highlights for format spec...
; (format)

[
  "."
  ":"
] @punctuation.delimiter

[
  "["
  "]"
] @punctuation.bracket

[
  "{"
  "}"
] @punctuation.special

[
  "{{"
  "}}"
] @string.escape
