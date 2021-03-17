#include "holberton.h"
/**
 * print_int - Prototype function
 * Description: Print int
 * @tok: voided
 * @args: list of args passed
 *
 * Return: Return length of digits printed
 */
int print_int(token_t tok, va_list args)
{
	int n = va_arg(args, int);
	int i, c = n, d, len = 0, pl;

	(void)tok;
	if (tok.padding_l)
		for (pl = 0; pl < tok.padding_l; pl++)
		{
			_putchar(' ');
			len++;
		}
	if (n == 0)
	{
		_putchar('0');
		len++;
		return (len);
	}
	if (n < 0)
	{
		_putchar('-');
		len++;
	}
	for (i = 1000000000; i >= 1; i /= 10)
	{
		if ((n >= 0 && n >= i) || (n < 0 && n <= -i))
		{
			d = c / i;
			_putchar((d < 0 ? -d : d) + '0');
			len++;
			c = d == 0 ? c : c - (d * i);
		}
	}
	return (len);
}
