#include <stdio.h>

/**
 * main - Utilizing main function to do the code
 *
 * Descripion: Getting the alphabet in lowercase and uppercase
 *
 * Return: Zero depending on printing values
*/

int main(void)
{
char i, z, x, y;
i = 'a';
z = 'z';
x = 'A';
y = 'Z';

while (i <= z)
{
putchar(i);
i++;
}

while (x <= y)
{
putchar(x);
x++;
}

putchar('\n');
return (0);
}
