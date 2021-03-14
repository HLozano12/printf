#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _count_tokens(char *format);
int _print(char *format);
char *_itoa(int n);
int _strlen(char *str);
int _is_valid_token(char *format, int current_pos);


/**
 *struct token - holds information about tokens in format string
 *@pos: start index position of token in format string
 *@len: length of token chars (always 2 or greater)
 *@conversion_specifier: char that tells us datatype of arg
 *@length_modifier: ignore for now-- may use later in advanced tasks
 *@flag: ignore for now-- may use later in advanced tasks
 *@min_width: ignore for now-- may use later in advanced tasks
 *@precision: ignore for now-- may use later in advanced tasks
 *
 *Description: %[flag][min width][precision][length modifier][conversion specifier]
 */
struct token
{
	int pos;
	int len;
	char conversion_specifier;
	char length_modifier;
	char flag;
	int min_width;
	int precision;
};
/*create datatype token_t */
typedef struct token token_t;
/**
 *struct format - maps conversion_specifier char to correct print_fn
 *@conversion_specifier: valid conversion_specifier char
 *@print_fn: pointer to function to handle type-specific printing
 *
 *Description: used to get print_fn for valid conversion_specifier
 */
struct format
{
	char conversion_specifier;
	int(*print_fn)(token_t);
};
/*create datatype format_t */
typedef struct format format_t;
/**
 *struct fmt - array of format_t linking conversion_specifier to print_fn
 */
struct format_t fmt[] = {
	{'c', print_char},
	{'s', print_string},
	{'d', print_int}
};/**
   *struct token - holds information about tokens in format string
   *@pos: start index position of token in format string
   *@len: length of token chars (always 2 or greater)
   *@conversion_specifier: char that tells us datatype of arg
   *@length_modifier: ignore for now-- may use later in advanced tasks
   *@flag: ignore for now-- may use later in advanced tasks
   *@min_width: ignore for now-- may use later in advanced tasks
   *@precision: ignore for now-- may use later in advanced tasks
   *
   *Description: %[flag][min width][precision][length modifier][conversion specifier]
   */
struct token
{
	int pos;
	int len;
	char conversion_specifier;
	char length_modifier;
	char flag;
	int min_width;
	int precision;
};
/*create datatype token_t */
typedef struct token token_t;
/**
 *struct format - maps conversion_specifier char to correct print_fn
 *@conversion_specifier: valid conversion_specifier char
 *@print_fn: pointer to function to handle type-specific printing
 *
 *Description: used to get print_fn for valid conversion_specifier
 */
struct format
{
	char conversion_specifier;
	int(*print_fn)(token_t);
};
/*create datatype format_t */
typedef struct format format_t;
/**
 *struct fmt - array of format_t linking conversion_specifier to print_fn
 */
struct format_t fmt[] = {
	{'c', print_char},
	{'s', print_string},
	{'d', print_int}
};

#endif
