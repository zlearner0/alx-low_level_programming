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
unsigned int alllen;
unsigned int len1 = 0;
unsigned int len2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
if (n >= len2)
n = len2;
alllen = len1 + n;
char *result = (char *)malloc((alllen + 1) * sizeof(char));
if (result == NULL)
{
return (NULL);
}
for (unsigned int i = 0; i < len1; i++)
{
result[i] = s1[i];
}
for (unsigned int i = 0; i < n; i++)
{
result[len1 + i] = s2[i];
}
result[alllen] = '\0';
return (result);
}
