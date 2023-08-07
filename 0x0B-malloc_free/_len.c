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
