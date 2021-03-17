# 0x11. C - print

printf is a function used to print an output according to a format.

## Usage

Print ARGUMENT(s) according to FORMAT, or execute accoring to OPTION:

## Structs

### struct token - holds information about tokens in format string
#### @pos: start index position of token in format string
#### @len: length of token chars (always 2 or greater)
#### @padding_l: # of spaces to put before formatted token value
#### @padding_r: # of spaces to put after formatted token value
#### @conversion_specifier: char that tells us datatype of arg
#### @length_modifier: ignore for now-- may use later in advanced tasks
#### @flag: ignore for now-- may use later in advanced tasks
#### @min_width: ignore for now-- may use later in advanced tasks
#### @precision: ignore for now-- may use later in advanced tasks
#### Description: %[flag][min width][precision][length mod][conversion specifier]

### struct format - maps conversion_specifier char to correct print_fn
#### @conversion_specifier: valid conversion_specifier char
#### @print_fn: pointer to function to handle type-specific printing
#### Description: used to get print_fn for valid conversion_specifier

## Prototypes

##### int print_char(token_t tok, va_list args);

prints a single character

##### int print_string(token_t tok, va_list args);

prints a string

##### int print_integer(token_t tok, va_list args);

prints an integer

##### int print_binary(token_t tok, va_list args);

prints a binary value

##### int print_octal(token_t tok, va_list args);

prints octal representation of a number

##### int print_hex(token_t tok, va_list args);

prints a hexidecimal value

##### int print_reverse(token_t tok, va_list args);

prints a string in reverse

##### int print_rot13(token_t tok, va_list args);

prints the rot13 value of a given variable

##### int print_invalid_token(token_t tok, va_list args);

prints invalid token

##### int print_percent(token_t tok, va_list args);

prints %

## Authors

Adam Brimer, Hector Lozano & Matthew Mires