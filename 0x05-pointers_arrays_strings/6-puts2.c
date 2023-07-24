#include "main.h"
#include <unistd.h>

/**
* puts2 - prints a letter on and off for a string
* @str: pointer to a string array
*/

void puts2(char *str)
{
int len;
int i;
i = 0;
len = _strlen(str);
while (i < len)
{
write(1, str, 1);
str = str + 2;
i = i + 2;
}
write(1, "\n", 1);
}
