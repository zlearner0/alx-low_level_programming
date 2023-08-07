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
if (str == NULL)
return (NULL);
int length = _len(str);
char *duplicate = (char *)malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);
char *src = str;
char *dest = duplicate;
while (*src != '\0')
{*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (duplicate);
}
