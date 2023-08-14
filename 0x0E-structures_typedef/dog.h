#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct for dog information
 * @name: string of doge name
 * @age: float for doge age
 * @owner: string for doge owner
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif
