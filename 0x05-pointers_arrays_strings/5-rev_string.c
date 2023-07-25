#include "main.h"
/**
* rev_string - prints a reversed copy of a string letters
* @s: pointer to string array
*/

void rev_string(char *s)
{
char *start = s;
char rev;
int i = 0;
int len = 0;
while (*s++)
{
len++;
}
s = start;
while (i < len / 2)
{
rev = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = rev;
i++;
}
}
