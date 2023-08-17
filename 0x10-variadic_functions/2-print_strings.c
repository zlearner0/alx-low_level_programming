#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints the text are input
 * @separator: string separator between text
 * @n: the number of the string arguments
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list args;
va_start(args, n);
if (!separator)
separator = "";
for (i = 0; i < n; i++)
{
s = va_arg(args, char *);
printf("%s%s", (*s != '\0') ? s : "(nil)", i == n - 1 ? "\n" : separator);
}
va_end(args);
}
