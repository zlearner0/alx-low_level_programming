#include <stdio.h>

/**
 * main - Utilizing main function to do the code
 *
 * Descripion: Getting the number from 0 to 9 with comma
 *
 * Return: Zero depending on printing values
*/

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i + '0' != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
