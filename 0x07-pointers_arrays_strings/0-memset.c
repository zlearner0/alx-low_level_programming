#include "main.h"

/**
 * _memset - fill the memory with a character b till n number
 * @s: pointer to string character array
 * @b: the character will be repeated and filled
 * @n: the numbers of repatation for character b
 * Return: pointer to string array
*/


char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
while (n--)
{
*p = b;
p++;
}
*p = '\0';
return (s);
}
