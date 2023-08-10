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
void *p;
unsigned int len, i;
if (new_size == old_size)
return (ptr);
else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else
p = malloc(new_size);
if (ptr != NULL)
{
for (len = 0; *((char *)ptr + len) != '\0'; len++)
;
if (len > new_size)
len = new_size;
for (i = 0; i < len; i++)
*((char *)p + i) = *((char *)ptr + i);
}
return (p);
}
