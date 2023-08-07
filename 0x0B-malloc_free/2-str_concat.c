#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _len - get the length of a string
 * @s: the pointer to a string
 * Return: the string length
*/

int _len(char *s)
{
int len1 = 0;
while (*s != '\0')
{
len1++;
s++;
}
return (len1);
}

/**
 * str_concat -concatenates two strings into one string
 * @s1: the first pointer to be concatenated
 * @s2: the second pointer to be concatenated
 * Return: pointer to the new string concatenated
*/

char *str_concat(char *s1, char *s2)
{
char *p, *ptr;
int len1, len2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = _len(s1);
len2 = _len(s2);
p = (char *)malloc((len1 + len2 + 1) * sizeof(char));
if (p == NULL)
return (NULL);
ptr = p;
while (*s1 != '\0')
*p++ = *s1++;
while (*s2 != '\0')
*p++ = *s2++;
*p = '\0';
return (ptr);
}
