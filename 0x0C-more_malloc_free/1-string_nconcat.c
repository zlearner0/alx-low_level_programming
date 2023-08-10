#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -concatenate 2 strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: number of words to be contactenated
 * Return: void pointer for string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str1, *str2, *p, *start;
int len1 = 0;
int len2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
str1 = s1;
str2 = s2;
while (*str1 != '\0')
{
len1++;
str1++;
}
while (*str2 != '\0')
{
len2++;
str2++;
}
if (n > len2)
n = len2;
p = malloc(sizeof(char) * (len1 + n + 1));
if (p == NULL)
return (NULL);
start = p;
while (*s1 != '\0')
*p++ = *s1++;
while (n--)
*p++ = *s2++;
*p = '\0';
return (start);
}
