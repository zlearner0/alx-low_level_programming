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
for (unsigned int i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
