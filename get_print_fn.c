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
	static format_t fmt[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent}
	};
	int i;

	for (i = 0; i < 3; i++)
		if (fmt[i].conversion_specifier == tok.conversion_specifier)
			return (fmt[i].print_fn);

	return (print_invalid_token);
}
