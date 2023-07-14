#include <stdio.h>

/**
 * main - Utilizing main function to do the code
 *
 * Descripion: Getting the alphabet in lowercase
 *
 * Return: Zero depending on printing values
*/

int main(void)
{
int i;
for (i = 0; i < 16; i++)
{
if (i < 10)
{
putchar(i + '0');
}
else
{
putchar(i - 10 + 'a');
}
}
putchar('\n');
return (0);
}
