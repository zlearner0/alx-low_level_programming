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
int i = 0;
char text[] = "_putchar";
while (text[i] != '\0')
{
char s = text[i];
_putchar(s);
i++;
}
char n = '\n';
_putchar(n);
return (0);
}
