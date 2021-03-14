#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _count_tokens(char *format);
int _print(char *format);
char *_itoa(int n);
int _strlen(char *str);
int _is_valid_token(char *format, int current_pos);

#endif
