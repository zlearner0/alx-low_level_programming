#include "main.h"

/**
 * print_alphabet_x10 - using print_alphabet function for alphabet 10 times
*/

void print_alphabet_x10(void)
{
int i;
for (i = 1; i < 11; i++)
{
int j;
for (j = 97; j < 123; j++)
{
char s = j;
_putchar(s);
}
_putchar('\n');
}
}
