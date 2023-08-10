#include "main.h"
#include <stdlib.h>

/**
 * array_range - give a pointer to integer array
 * @min: first element of the array
 * @max: last element of the array
 * Return:  a void pointer for an integer array
*/
int *array_range(int min, int max)
{
int *p, size, i;
if (min > max)
return (NULL);
size = max - min + 1;
p = malloc(sizeof(int) * size);
if (p == NULL)
return (NULL);
for (i = 0; i < size; i++)
*(p + i) = min + i;
return (p);
}
