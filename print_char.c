#include "holberton.h"

/**
 * print_char - prints a single character
 * @tok: void parameter token
 * @args: arg list from _printf to use for getting character to print
 * Return: 1 always because a character is always onl one character long
 */

int print_char(token_t tok, va_list args)
{
	char x;

	(void)tok;
	x = va_arg(args, int);
	_putchar(x);
	return (1);
}
