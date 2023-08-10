#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory for integer
 * @b: the integer value to be assigned to memory
 * Return: void pointer for integer
*/

void *malloc_checked(unsigned int b)
{
int *x;
x = malloc(b);
if (x == 0)
exit(98);
return (x);
}
