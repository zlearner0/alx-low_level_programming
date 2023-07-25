#include "main.h"
#include <unistd.h>

/**
* print_rev - prints a reversed copy of a string
* @s: pointer to string array
*/

void print_rev(char *s)
{
char *start = s;
int len = 0;
while (*s++)
{
len++;
}
s = s - 2;
while (*s)
{
write(1, s, 1);
s--;
}
write(1, "\n", 1);
}
