#include <stdio.h>

/**
 * main - Utilizing main function to do the code
 *
 * Descripion: Getting the numbers from 00 01 to 99 99 with comma
 *
 * Return: Zero depending on printing values
*/

int main(void)
{
int i;
int j;
int k;
int m;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (k = 0; k < 10; k++)
{
for (m = 0; m < 10; m++)
{
if (!(i == j && k == m && i == k)
&& !(i > k)
&& !(i == k && j > m)
)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(m + '0');
if (i + '0' != '9' || j + '0' != '8' || k + '0' != '9' || m + '0' != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
