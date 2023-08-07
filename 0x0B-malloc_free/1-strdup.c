#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
