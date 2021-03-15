#include "holberton.h"
#include <stdio.h>

/**
 * This is a test file and will not be included with our final code
 * Will will need all of the functions in this file, but have to rewrite to do the same thing w/out printf
 * We can use this file to test that everything is working correctly up to out type-specific print functions
 * Note: betty would not like some of the formatting here, but doesn't matter b/c checker won't need to see this file
*/
int print_invalid_token(token_t tok, va_list args)
{
	(void)args;

	printf("%%%c", tok.conversion_specifier);
	return (2);
}
int print_char(token_t tok, va_list args)
{
	char c = va_arg(args, int);
	(void)tok;

	printf("<char: %c>", c);
        return (0);
}
int print_string(token_t tok, va_list args)
{
	(void)tok;
       	
	printf("<string: %s>", va_arg(args, char*)); 
        return (0);
}
int print_integer(token_t tok, va_list args)
{
	(void)tok;
        
	printf("<integer: %d>", va_arg(args, int));
        return (0);
}
int print_binary(token_t tok, va_list args)
{
	(void)tok;
        
	printf("<binary: %d>", va_arg(args, int));
        return (0);
}
int print_octal(token_t tok, va_list args)
{
	(void)tok;
       
	printf("<octal: %o>", va_arg(args, int)); 
        return (0);
}
int print_hex(token_t tok, va_list args)
{
	(void)tok;

	printf("%x", va_arg(args, int));
	return (0);
}
int print_reverse(token_t tok, va_list args)
{
	(void)tok;

	printf("<reverse: %s>", va_arg(args, char*));
	return (0);
}
int print_rot13(token_t tok, va_list args)
{
	(void)tok;

	printf("<rot13: %s>", va_arg(args, char*));
	return (0);
}
