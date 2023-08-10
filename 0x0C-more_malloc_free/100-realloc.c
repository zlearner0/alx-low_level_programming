#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - create new memory storage for old array
 * @ptr: the old array
 * @old_size: the old array size
 * @new_size: the new array size
 * Return:  a void pointer for array
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned char *src;
unsigned char *dest;
unsigned int i;
void *new_ptr;
if (ptr == NULL)
return (malloc(new_size));
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
return (ptr);
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
src = (unsigned char *)ptr;
dest = (unsigned char *)new_ptr;
for (i = 0; i < old_size && i < new_size; i++)
dest[i] = src[i];
free(ptr);
return (new_ptr);
}
