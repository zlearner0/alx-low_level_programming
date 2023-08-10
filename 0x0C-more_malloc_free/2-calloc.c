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
void *ptr;
unsigned int totalSize;
unsigned char *bytePtr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
totalSize = nmemb * size;
ptr = malloc(totalSize);
if (ptr == NULL)
return (NULL);
bytePtr = (unsigned char *)ptr;
for (i = 0; i < totalSize; i++)
bytePtr[i] = 0;
return (ptr);
}
