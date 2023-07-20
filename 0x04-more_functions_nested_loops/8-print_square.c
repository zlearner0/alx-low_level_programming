#include "main.h"

/**
 * print_square - print hashed to build a square
 * @size: the number of hashes helps to draw the square
*/
void print_square(int size)
{
if (size > 0)
{
int i;
int j;
i = 1;
while (i <= size)
{
j = 1;
while (j <= size)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
else
_putchar('\n');
}
