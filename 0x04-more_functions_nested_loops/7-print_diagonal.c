#include "main.h"

/**
 * print_diagonal - print series of _ underscore
 * @n: the number of spaces helps to draw the diagonal line
*/

void print_diagonal(int n)
{
int i;
int j;
i = 0;
if (n > 0)
{
while (i < n)
{
j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
i++;
}
}
_putchar('\n');
}
