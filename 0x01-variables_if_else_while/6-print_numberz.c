#include <stdio.h>

/**
 * main - Utilizing main function to do the code
 *
 * Descripion: Getting the number from 0 to 9 with putchar
 *
 * Return: Zero depending on printing values
*/

int main(void)
{

int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
