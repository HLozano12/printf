#include "holberton.h"

/**
 * print_invalid_token - handles invalid conversion specifiers
 * @tok: token w/ invalid conversion specifier
 * @args: voided-- don't need args for an invalid token!
 *
 * Return: length of '%' + invalid char (always 2)
*/
int print_invalid_token(token_t tok, va_list args)
{
	(void)args;
	if (tok.conversion_specifier == '\0')
		return (0);
	_putchar('%');
	_putchar(tok.conversion_specifier);

	return (2);
}
