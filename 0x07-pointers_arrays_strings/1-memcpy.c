#include "main.h"

/**
 * _memcpy - copy a memory location to another
 * @dest: the memory location to copy to
 * @src: the memory location to be copied
 * @n: the numbers of characcters to be copied
 * Return: pointer to string array
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = dest;
while (n--)
{
*p++ = *src++;
}
*p = '\0';
return (dest);
}
