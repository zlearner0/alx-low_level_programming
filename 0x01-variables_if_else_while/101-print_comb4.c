#include <stdio.h>

/**
 * main - Utilizing main function to do the code
 *
 * Descripion: Getting the numbers from 01 to 99 with comma
 *
 * Return: Zero depending on printing values
*/

int main(void)
{
int i;
int j;
int k;
for (i = 0; i < 10; i++)
{
for (j = 1; j < 10; j++)
{
for (k = 1; k < 10; k++)
{
if (k >= j && j >= i && j != i && j != k)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i + '0' != '7' || j + '0' != '8' || k + '0' != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
