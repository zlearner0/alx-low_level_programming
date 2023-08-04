#include "main.h"
/**
 * _strchr - give a string from the search character c
 * @s: the ponter to the string
 * @c: the character that function will search for
 * Return: pointer to string array or null if character not found
*/
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
return ('\0');
}
