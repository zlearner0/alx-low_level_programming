#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free allocated bytes of a struct pointer
 * @d: pointer to struct
 * Return: nothing
 */

void free_dog(dog_t *d)
{
if (d)
{
if ((*d).name)
free((*d).name);
if ((*d).owner)
free((*d).owner);
}
}
