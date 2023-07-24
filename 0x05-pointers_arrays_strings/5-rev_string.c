#include "main.h"
#include <unistd.h>

/**
* rev_string - prints a reversed copy of a string letters
* @s: pointer to string array
*/

void rev_string(char *s)
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
