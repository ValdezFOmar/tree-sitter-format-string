(identifier) @variable

(attribute_expression
  attribute: (identifier) @variable.member)

[
  (integer)
  (width)
] @number

(precision) @number.float

(item_string) @string

(conversion) @function.macro

(type) @type

(character) @character

[
  "<"
  ">"
  "="
  "^"
  "z"
  "#"
  (sign)
  (grouping_option)
] @character.special

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
