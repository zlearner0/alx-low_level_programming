#include "main.h"
/**
 * _strlen_recursion - prints a string length
 * @s: the pointer to string to be printed
 * Return: the string length as a number
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
