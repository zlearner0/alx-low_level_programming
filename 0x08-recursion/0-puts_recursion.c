#include "main.h"
/**
 * _puts_recursion - prints a string of characters
 * @s: the pointer to string to be printed
 * Return: nothing
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
if (*s == '\0')
{
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
