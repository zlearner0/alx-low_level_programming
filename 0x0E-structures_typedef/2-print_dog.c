#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints struct members
 * @d: pointer to struct
 * Return: nothing
 */

void print_dog(struct dog *d)
{
if (d != 0)
{
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
(*d).owner = "(nil)";
printf("Name: %s\n", (*d).name);
printf("Age: %f\n", (*d).age);
printf("Owner: %s\n", (*d).owner);
}
}
