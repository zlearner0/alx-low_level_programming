#include "main.h"
#include <unistd.h>

/**
* print_rev - prints a reversed copy of a string
* @s: pointer to string array
*/

void print_rev(char *s)
{
int len;
len = _strlen(s);
s = s + len - 1;
while (*s)
{
write(1, s, 1);
s--;
}
write(1, "\n", 1);
}
