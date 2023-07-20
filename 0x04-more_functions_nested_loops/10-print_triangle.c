#include "main.h"

/**
 * print_triangle - print hashed to build a triangle
 * @size: the number of hashes helps to draw the triangle
*/

void print_triangle(int size)
{
if (size > 0)
{
int i;
int j;
int k;
i = 1;
while (i <= size)
{
j = 1;
k = 1;
while (j <= size - i)
{
_putchar(' ');
j++;
}
j--;
while (k <= size - j)
{
_putchar('#');
k++;
}
_putchar('\n');
i++;
}
}
else
_putchar('\n');
}
