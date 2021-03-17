#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _print(char *format);
char *_itoa(int n);
int _strlen(char *str);

/**
 * struct token - holds information about tokens in format string
 * @pos: start index position of token in format string
 * @len: length of token chars (always 2 or greater)
 * @conversion_specifier: char that tells us datatype of arg
 * @length_modifier: ignore for now-- may use later in advanced tasks
 * @flag: ignore for now-- may use later in advanced tasks
 * @min_width: ignore for now-- may use later in advanced tasks
 * @precision: ignore for now-- may use later in advanced tasks
 *
 * Description: %[flag][min width][precision][length mod][conversion specifier]
 */
struct token
{
	int pos;
	int len;
	char conversion_specifier;
	int padding_l;
	int padding_r;
	char length_modifier;
	char flag;
	int min_width;
	int precision;
};
/* create datatype token_t */
typedef struct token token_t;

/* prototypes for functions to get token and pointer to print function */
token_t *get_token(const char *format, int current_pos);
int (*get_print_fn(token_t tok))(token_t, va_list);

/* prototypes for type-specific print functions */
int print_char(token_t tok, va_list args);
int print_string(token_t tok, va_list args);
int print_int(token_t tok, va_list args);
int print_binary(token_t tok, va_list args);
int print_octal(token_t tok, va_list args);
int print_hex(token_t tok, va_list args);
int print_reverse(token_t tok, va_list args);
int print_rot13(token_t tok, va_list args);
int print_invalid_token(token_t tok, va_list args);
int print_percent(token_t tok, va_list args);
/**
 * struct format - maps conversion_specifier char to correct print_fn
 * @conversion_specifier: valid conversion_specifier char
 * @print_fn: pointer to function to handle type-specific printing
 *
 * Description: used to get print_fn for valid conversion_specifier
 */
struct format
{
	char conversion_specifier;
	int (*print_fn)(token_t, va_list);
};
/*create datatype format_t */
typedef struct format format_t;

#endif
