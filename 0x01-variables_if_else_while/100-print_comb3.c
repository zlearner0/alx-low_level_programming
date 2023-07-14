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
for (i = 0; i < 10; i++)
{

for (j = 1; j < 10; j++)
{
if (j >= i && j != i)
{
putchar(i + '0');
putchar(j + '0');
if (i + '0' != '8' || j + '0' != '9')
{
putchar(',');
putchar(' ');
}
}

}
}
