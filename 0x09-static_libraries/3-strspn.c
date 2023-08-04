#include "main.h"

/**
 * _strspn - scan 2 strings and gives the common number of characters
 * @s: the initial string to be counted its charachters
 * @accept: the string pattern to be totally checked
 * Return: number of common characters in the string
*/
unsigned int _strspn(char *s, char *accept)
{
int len = 0;
int found = 0;
char *start = accept;
while (*s)
{
while (*accept)
{
if (*s == *accept)
{
found = 1;
}
accept++;
}
if (found == 1)
{
len++;
accept = start;
found = 0;
}
else
{
break;
}
s++;
}
return (len);
}
