#include "holberton.h"
/**
 * print_string - Prototype function
 * Description: Print string provided
 * @tok: voided
 * @args: list of args passed
 *
 * Return: length of string printed
 */
int print_string(token_t tok, va_list args)
{
	char *str = va_arg(args, char*);
	char *string;
	int i;

	(void)tok;
	if (str == NULL || str == (char *)0)
		string = "(null)";
	else
		string = str;
/* passing through string to obtain length */
	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);

	return (i);
}
