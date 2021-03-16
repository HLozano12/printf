#include "holberton.h"


/**
 * _printf - prints a formatted string with optional args
 * @format: format string containing optional '%' tokens
 *
 * Return: total length of output printed
*/
int _printf(const char *format, ...)
{
	/* i for loop over format, total_len to keep track of chars printed */
	int i = 0, total_len = 0;
	/* magic data type that lets us get unknown params from ... */
	va_list args;
	/* set every time we find a % and call get_token */
	token_t tok;
	/* function pointer set every time we need to handle a found token */
	int (*print_fn)(token_t, va_list);

	if (format == NULL)
		return (0);
	/* tell va_list where to start reading unknown params from ... */
	va_start(args, format);
	/* loop over every char in format string */
	while (format[i])
	{
		if (format[i] == '%')
		{
			/* gets all the info we need on how to handle token */
			tok = *get_token(format, i);
			/* gets function we need to handle printing token */
			print_fn = get_print_fn(tok);
			/* call function to print arg in place of token */
			/* add returned length printed to total_len */
			total_len += print_fn(tok, args);
			/* skips over token chars we've handled */
			i += tok.len;
		}
		else
		{
			_putchar(format[i]);
			total_len++;
			i++;
		}
	}
	va_end(args);

	return (total_len);
}
