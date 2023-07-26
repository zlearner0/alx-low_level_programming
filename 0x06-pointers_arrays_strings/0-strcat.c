#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: the string that receives the second string
 * @src: the string to be added to the dest string
 * Return: a pointer to string for the combined two strings
*/

char *_strcat(char *dest, char *src)
{
char *p, *start;
start = dest;
int len = 0;
while (*dest++)
{
len++;
}
p = dest - 1;
while (*src != '\0')
{
*p++ = *src++;
}
*p = '\0';
dest = start;
return (dest);
}
