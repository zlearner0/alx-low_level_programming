#include "main.h"
/**
 * jack_bauer - counting minutes for 24 hours
 *
 * Return: last digit
*/

void jack_bauer(void)
{
int i;
int j;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
int h0  = i % 10 + 48;
int h10 = i / 10 + 48;

int m0 = j % 10 + 48;
int m10 = j / 10 + 48;

_putchar(h10);
_putchar(h0);
_putchar(':');
_putchar(m10);
_putchar(m0);
_putchar('\n');
}
}
}
