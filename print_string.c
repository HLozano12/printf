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
	int i;

	(void)tok;
	/* return another call to _printf to handle NULL and return length */
	if (str == NULL || str == (char *)0)
		return (_printf("(null)"));
	/* passing through string to obtain length */
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
