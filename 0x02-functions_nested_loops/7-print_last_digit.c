#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: user input to check the last no.
 *
 * Return: last digit
*/

int print_last_digit(int n)
{
int r;
if (n < 0)
r = (-n % 10);
else
r = (n % 10);
_putchar(r + '0');
return (r);
}
