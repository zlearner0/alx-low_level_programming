#include "main.h"

/**
 * print_alphabet - using _putchart function to print the alphabet
*/

void print_alphabet(void)
{
int i;
for (i = 97; i < 122; i++)
{
char s = i;
_putchar(s);
}
_putchar('\n');
}
