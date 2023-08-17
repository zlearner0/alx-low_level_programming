#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints the numbers are input
 * @separator: string separator between numbers
 * @n: the number of the integer arguments
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int num;
va_list args;
if (!n)
{
printf("\n");
return;
}
va_start(args, n);
if (!separator)
separator = "";
for (i = 0; i < n; i++)
{
num = va_arg(args, int);
printf("%u%s", num, i == n - 1 ? "\n" : separator);
}
va_end(args);
}
