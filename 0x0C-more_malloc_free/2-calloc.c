#include "main.h"
#include <stdlib.h>

/**
 * _calloc - give a pointer to  array
 * @nmemb: the array elements number
 * @size: the array elemen data type size
 * Return:  a void pointer for an array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
void *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(size * nmemb);
if (p == NULL)
return (NULL);
for (i = 0; i < nmemb; i++)
*((char *)p + i) = 0;
return (p);
}
