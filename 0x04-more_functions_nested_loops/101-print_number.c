#include "main.h"
/**
 * print_number - function prints integer number
 * @n: the number to be printed
*/
void print_number(int n)
{
int i, count, m, power, count2, z;
count = 0;
m = n;
power = 10;
z = 0;
if (n < 0)
{
n = -n;
z = 1;
}
while (m != 0)
{
m = m / 10;
count++;
}
count2 = count;
while (--count)
{
power *= 10;
}
if (z != 0)
{
_putchar(45);
}
while (count2--)
{
power /= 10;
_putchar((n / power) % 10 + 48);
}
if (n == 0)
{
_putchar(48);
}
_putchar('\n');
}
