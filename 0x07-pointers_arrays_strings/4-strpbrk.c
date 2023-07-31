#include "main.h"

/**
 * _strpbrk - scan 2 strings and gives the start of a string from the common
 * @s: the initial string to be counted its charachters
 * @accept: the string pattern to be totally checked
 * Return: pointer string for the result
*/
char *_strpbrk(char *s, char *accept)
{
for (; *s; s++)
{
for (char *p = accept; *p; p++)
{
if (*s == *p)
{
return (s);
}
}
}
return (NULL);
}
