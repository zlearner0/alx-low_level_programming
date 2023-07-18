#include "main.h"

/**
 * main - Utilizing main function to do the code
 *
 * Descripion: printing the string
 *
 * Return: Zero depending on printing values
*/

int main(void)
{
int i;
for (i = 97; i < 122; i++)
{
char s = i;
_putchar(s);
}
_putchar('\n');
return (0);
}
