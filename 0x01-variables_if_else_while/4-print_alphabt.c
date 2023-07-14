#include <stdio.h>

/**
 * main - Utilizing main function to do the code
 *
 * Descripion: Getting the alphabet in lowercase except q and e
 *
 * Return: Zero depending on printing values
*/

int main(void)
{
char i, z;
i = 'a';
z = 'z';
while (i <= z)
{
if (i != 'e' && i != 'q')
{
putchar(i);
}
i++;
}
putchar('\n');
return (0);
}
