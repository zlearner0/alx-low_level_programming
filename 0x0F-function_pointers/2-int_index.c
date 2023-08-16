#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - gives index of array element
 * @array: integer array to print its elements
 * @size: no.of array elements
 * @cmp: pointer to function gives true 1 or false 0
 * Return: the index of array
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int x, y;
if (array && size && cmp)
{
for (x = 0; x < size; x++)
{
y = cmp(array[x]);
if (y == 1)
return (x);
}
}
return (-1);
}
