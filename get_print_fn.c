#include "holberton.h"

/**
 * get_print_fn - gets the function to handle va_arg to type-specific print
 * @tok: token_t for current token
 *
 * Return: pointer to a function that takes token_t, va_list and returns int
*/
int (*get_print_fn(token_t tok))(token_t, va_list)
{
	/* create a static array of format_t for all valid chars */
	/* "Router table" to tell _printf which func. handles print */
	static format_t fmt[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_int},
		{'d', print_int},
		{'R', print_rot13}
	};
	int i;

	/* loop over fmt, return correct func. if conversion_specifiers match */
	for (i = 0; i < 6; i++)
		if (fmt[i].conversion_specifier == tok.conversion_specifier)
			return (fmt[i].print_fn);
	/* if tok.conversion_specifier is not in fmt, return default func */
	return (print_invalid_token);
}
