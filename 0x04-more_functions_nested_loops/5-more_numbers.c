#include "main.h"

/**
 * more_numbers - print serial from 0 to 14
 * Descripion: printout the digits ascendingly
*/

void more_numbers(void)
{
int j;
j = 10;
while (j--)
{
int i;
for (i = 0; i <= 14; i++)
{
if (i / 10 != 0)
{
_putchar(i / 10 + 48);
}
_putchar(i % 10 + 48);
}
_putchar('\n');
}
}
