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
 * _strdup - ceate a pduplicate for a string
 * @str: the pointer to string to be duplicted
 * Return: pointer to the new string duplicated
*/

char *_strdup(char *str)
{
char *p, *ptr;
if (str == NULL)
return (NULL);
p = (char *)malloc(_len(str) * sizeof(char));
if (p == NULL)
return (NULL);
ptr = p;
while (*str != '\0')
{
*p++ = *str++;
}
*p = '\0';
return (ptr);
}
