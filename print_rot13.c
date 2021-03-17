#include "holberton.h"
/**
 * print_rot13 - prints rot13 of input string from va_list
 * @tok: voided for this function
 * @args: variadic args from _printf
 *
 * Return: int length of printed string
*/
int print_rot13(token_t tok, va_list args)
{
	/* iterator variable for while loop */
	int i = 0;
	/* get our not-yet-rot13ed string from va_arg w/ char* cast */
	char *s = va_arg(args, char*);
	/* array w/ ASCII char 'A'-'z' (65-122) set to rot13 char */
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLM[\\]^_`nopqrstuvwxyzabcdefghijklm";

	(void)tok;
	/* same check for NULL string that we do in print_string */
	/* print "(null)" output and return length with call to _printf */
	if (s == NULL || s == (char *)0)
		return (_printf("(null)"));
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'z')
			_putchar(rot[s[i] - 'A']);
		else
			_putchar(s[i]);
		i++;
	}

	return (i);
}
