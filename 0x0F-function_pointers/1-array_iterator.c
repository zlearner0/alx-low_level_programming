#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - prints an integer passing through a function
 * @array: integer array to print its elements
 * @size: no.of array elements
 * @action: pointer to function that prints integers
 * Return: nothing to return
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;
if (array && size && action)
{
for (x = 0; x < size; x++)
action(array[x]);
}
}
