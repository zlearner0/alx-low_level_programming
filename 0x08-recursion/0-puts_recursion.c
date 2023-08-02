#include "main.h"
/**
 * _puts_recursion - prints a string of characters
 * @s: the pointer to string to be printed
 * Return: nothing
*/

void _puts_recursion(char *s)
{
char *p = s;
_putchar(*p);
p++;
if (*p != '\0')
{
_puts_recursion(p);
}
}
