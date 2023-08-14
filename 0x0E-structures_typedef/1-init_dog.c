#include "dog.h"

/**
 *init_dog - assign dog information to a pointer struct
 * @d: pointer to a struct
 * @name: the name member for struct dog
 * @age: the age member for struct dog
 * @owner: the owner member for struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
