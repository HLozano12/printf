#include "holberton.h"

/**
 * print_reverse - prints a string in reverse
 * @tok: voided
 * @args: va_list of args from _printf
 *
 * Return: length of string printed
*/
int print_reverse(token_t tok, va_list args)
{
	int l = 0;
	char *str = va_arg(args, char*);
	char *rev;

	(void)tok;
	if (str == NULL || str == (char *)0)
		return (_printf("(null)"));
	while (str[l])
		l++;
	rev = str + (l - 1);
	while (rev >= str)
	{
		_putchar(*rev);
		rev--;
	}

	return (l);
}
