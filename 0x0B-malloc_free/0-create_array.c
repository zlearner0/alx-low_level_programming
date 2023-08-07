#include "main.h"
#include <stdlib.h>

/**
 * create_array - ceate a pointer to an array of string
 * @size: the size of the array in bytes
 * @c: the value of the string
 * Return: pointer to a string or null
*/
char *create_array(unsigned int size, char c)
{
char *p;
p = (char *)malloc(size * sizeof(char));
if (size == 0 || p == NULL)
return (NULL);
while (size--)
p[size] = c;
return (p);
}
