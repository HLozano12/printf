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
	char *string = va_arg(args, char*);
	int i;

	(void)tok;
/* passing through string to obtain length */
	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);
	return (i);
}
