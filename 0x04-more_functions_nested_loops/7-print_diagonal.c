#include "main.h"

/**
 * print_diagonal - print series of _ underscore
 * @n: the number of spaces helps to draw the diagonal line
*/

void print_diagonal(int n)
{
if (n > 0)
{
while (n--)
{
_putchar(' ');
}
_putchar('\\');
}
_putchar('\n');
}
