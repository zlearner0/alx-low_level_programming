#include <stdio.h>

/**
 * main - Utilizing main function to do the code
 *
 * Descripion: Getting the alphabet in lowercase from z to a
 *
 * Return: Zero depending on printing values
*/

int main(void)
{
char i, z;
i = 'a';
z = 'z';
while (z >= i)
{
putchar(z);
z--;
}
putchar('\n');
return (0);
}
