#include "main.h"
#include <unistd.h>

/**
* puts2 - prints a letter on and off for a string
* @str: pointer to a string array
*/

void puts2(char *str)
{
int i = 0;
int len = 0;
char *start = str;
while (*str++)
{
len++;
}
str = start;
while (i < len)
{
write(1, str + i, 1);
i += 2;
}
write(1, "\n", 1);
}
