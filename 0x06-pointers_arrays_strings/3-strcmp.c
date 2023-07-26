#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared with
 * Return: an integer for the compareson result
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
s1++, s2++;
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
