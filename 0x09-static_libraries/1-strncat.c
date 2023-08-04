#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: the string that receives the second string
 * @src: the string to be added to the dest string
 * @n: the number of letter to the dest string
 * Return: a pointer to string for the combined two strings
*/

char *_strncat(char *dest, char *src, int n)
{
char *p = dest;
int len = 0;
while (*p != '\0')
{
len++;
p++;
}
p = dest + len;
while (*src != '\0' && n-- > 0)
{
*p++ = *src++;
}
*p = '\0';
return (dest);
}

