#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate a string in dynamic memory
 * @str: pointer to string to be copied
 * Return: pointer to copied string
 */

char *_strdup(const char *str)
{
int len;
int i;
char *new_str;
for (len = 0; str[len] != '\0'; len++)
;
new_str = malloc(len + 1);
if (!new_str)
return (NULL);
for (i = 0; i < len; i++)
new_str[i] = str[i];
return (new_str);
}

/**
 * new_dog - create dynamic pointer to struct
 * @name: pointer to string
 * @age: the dog age in float
 * @owner: pointer to string
 * Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
dog = malloc(sizeof(dog_t));
if (!dog)
return (NULL);
dog->name = _strdup(name);
dog->age = age;
dog->owner = _strdup(owner);
return (dog);
}
