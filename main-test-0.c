#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - main method for testing our _printf function against printf from stdio
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("char: %c, int: %d\n", '!', 100);

	return (0);
}