#include "main.h"

/**
 * _strncpy - concatenate two strings
 * @dest: the string that receives the second string
 * @src: the string to be copied
 * @n: the number of letter to the dest string
 * Return: a pointer to string for the copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
