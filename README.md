 #0x11. C - printf (Underline)

printf is a function used to print an output according to a format.

## Usage (Underline)

#### Structs (Underline)

##### tok

#### Prototypes (Underline)

##### int print_char(token_t tok, va_list args);
prints a single character

#####int print_string(token_t tok, va_list args);
prints a string

#####int print_integer(token_t tok, va_list args);
prints an integer

#####int print_binary(token_t tok, va_list args);
prints a binary value

#####int print_octal(token_t tok, va_list args);
prints octal representation of a number

#####int print_hex(token_t tok, va_list args);
prints a hexidecimal value

#####int print_reverse(token_t tok, va_list args);
prints a string in reverse

#####int print_rot13(token_t tok, va_list args);
prints the rot13 value of a given variable

#####int print_invalid_token(token_t tok, va_list args);


#####int print_percent(token_t tok, va_list args);
prints %


### Authors (Underline)
Adam Brimer, Hector Lozano & Matthew Mires