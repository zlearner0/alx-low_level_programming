#include "function_pointers.h"

/**
 * print_name - prints a string using function pointer
 * @name: the input string for printing
 * @f: pointer to function that prints input string
 * Return: nothing to return
*/

void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
