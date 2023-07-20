#include "main.h"

/**
 * print_line - print series of _ underscore
 * @n: the number of underscores to draw the line
*/

void print_line(int n)
{
if (n > 0)
{
while (n--)
{
_putchar('_');
}
}
_putchar('\n');
}
