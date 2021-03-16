#include "holberton.h"

/**
 * is_valid_cs_char - checks if character is a valid conversion specifier
 * @c: char to check
 *
 * Return: int 1 for valid, 0 for invalid
*/
int is_valid_cs_char(char c)
{
	char *valid_cs_chars = "csid%";

	while (*valid_cs_chars++)
		if (c == *valid_cs_chars)
			return (1);
	return (0);
}

/**
 * _skip - tells if char should be skipped looking for conversion_spec
 * @c: char to check
 *
 * Return: 1 for skip char, else 0
*/
int _skip(char c)
{
	char *skip_chars = "-+#";

	while (*skip_chars++)
		if (c == *skip_chars)
			return (1);
	return (0);
}

/**
 * get_token - get a token_t w/ all info on how to handle % in downstream logic
 * @format: format string originally passed as first param to _printf
 * @current_pos: current index position in loop over *format
 *
 * Return: token_t w/ everything we need to know about how to handle %...
*/
token_t *get_token(const char *format, int current_pos)
{
	struct token *tok = malloc(sizeof(struct token));
	int i = 1;

	if (tok == NULL)
		return (NULL);
	/* lets us know where we found the token in *format */
	tok->pos = current_pos;
	/* conversion_spec hard-coded to next char after % for required tasks */
	/* extend logic here to handle flags, length modifiers, etc */
	if (format[current_pos + 1] == '\0')
	{
		tok->conversion_specifier = '\0';
		tok->len = 1;
		return (tok);
	}
	/* skip spaces to get to conversion_specifier char */
	while (format[current_pos + i] == ' ' || _skip(format[current_pos + i]))
		i++;
	/* only skip spaces for valid cs chars */
	if (!is_valid_cs_char(format[current_pos + i]))
	{
		tok->conversion_specifier = format[current_pos + 1];
		tok->len = 2;
		return (tok);
	}
	tok->conversion_specifier = format[current_pos + i];
	tok->len = 1 + i;
	/* tok has more fields but we only need these 3 for required tasks */
	/* can add further logic here as needed w/out affecting outer logic */

	return (tok);
}
