#include "main.h"

/**
* _strlen - counts the length of a string
* @s: character array pointer input to be counted
* Return: integer for the string length
*/

int _strlen(char *s)
{
int arrlen;
arrlen = 0;
while (*s != '\0')
{
arrlen++;
s++;
}
return (arrlen);
}
