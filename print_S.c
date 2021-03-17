#include "holberton.h"

/**
 * print_S - prints string with ASCII code for special chars
 * @tok: voided
 * @args: list of args passed
 *
 * Return: length of string printed
 */
int print_S(token_t tok, va_list args)
{
	char *str = va_arg(args, char*);
	const char *b16 = "0123456789ABCDEF";
	int i, len = 0, c;
	char d1, d2;

	(void)tok;
	/* return another call to _printf to handle NULL and return length */
	if (str == NULL || str == (char *)0)
		return (_printf("%%S"));
	/* passing through string to obtain length */
	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if ((c > 0 && c < 32) || (c >= 127))
		{
			/* get first and last hex digits */
			d1 = b16[c / 16];
			d2 = b16[c % 16];
			len += _printf("\\x%c%c", d1, d2);
		}
		else
		{
			_putchar(c);
			len++;
		}
	}

	return (len);
}
