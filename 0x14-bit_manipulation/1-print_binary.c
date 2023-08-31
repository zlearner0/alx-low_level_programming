#include "main.h"
#include <stdio.h>

/**
 * print_binary - convert to binary number
 * @n: the positive decimal number
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
_putchar((n & 1) ? '1' : '0');
}
