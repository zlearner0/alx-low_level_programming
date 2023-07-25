#include "main.h"
#include <unistd.h>

/**
* puts_half - prints the second half of a string
* @str: pointer to a string array
*/
void puts_half(char *str)
{
int len = 0;
int i;
char *start = str;
while (*str++)
{
len++;
}
str = start;
if (len % 2 == 0)
{
i = len / 2;
}
else
{
i = (len - 1) / 2;
}
while (str[i] != '\0')
{
write(1, &str[i], 1);
i++;
}
}
