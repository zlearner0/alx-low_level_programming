#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum the numbers are input
 * @n: the number of the integer arguments
 * Return: the sum of the integer arguments
*/

int sum_them_all(const unsigned int n, ...)
{
int sum;
unsigned int i;
va_list args;
if (n == 0)
return (0);
sum = 0;
va_start(args, n);
for (i = 0; i < n; i++)
sum += va_arg(args, const unsigned int);
va_end(args);
return (sum);
}
