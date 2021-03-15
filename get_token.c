#include "holberton.h"

/**
 * get_token: get a token_t w/ all info on how to handle % in downstream logic
 * @format: format string originally passed as first param to _printf
 * @current_pos: current index position in loop over *format
 *
 * Return: token_t w/ everything we need to know about how to handle %...
*/
token_t *get_token(const char *format, int current_pos)
{
	struct token *tok = malloc(sizeof(struct token));

	if (tok == NULL)
		return (NULL);
	/* lets us know where we found the token in *format */
	tok->pos = current_pos;
	/* conversion_spec hard-coded to next char after % for required tasks */
	/* extend logic here to handle flags, length modifiers, etc */
	tok->conversion_specifier = format[current_pos + 1];
	/* len hard-coded to 2 for required tasks */
	/* tells how many chars to skip in *format once we've handled token */
	tok->len = 2;
	/* tok has more fields but we only need these 3 for required tasks */
	/* can add further logic here as needed w/out affecting outer logic */

	return (tok);
}
