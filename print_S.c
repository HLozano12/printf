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
	int i, len = 0, c;

	(void)tok;
	/* return another call to _printf to handle NULL and return length */
	if (str == NULL || str == (char *)0)
		return (_printf("(null)"));
	/* passing through string to obtain length */
	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if ((c > 0 && c < 32) || (c >= 127))
			len += _printf("\\x%d%d", c / 10, c % 10);
		else
		{
			_putchar(c);
			len++;
		}
	}

	return (len);
}
