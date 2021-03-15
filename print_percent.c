#include "holberton.h"
/**
 * print_percent - Prototype function
 * Description: Print out Percent Sign
 * @tok: Voided
 * @args: voided
 * Return: 1
 */
int print_percent(token_t tok, va_list args)
{
	(void)tok;
	(void)args;

	_putchar('%');
	return (1);
}
