#include "main.h"

/**
 * print_sign - using if statement for number sign
 * @n: user input to check the number sign
 *
 * Return: 1 for positive, -1 for negative, 0 for 0
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
