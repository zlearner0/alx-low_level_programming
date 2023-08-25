#include "lists.h"
#include <stdio.h>
void _starter(void) __attribute__((constructor));

/**
 * _starter - initialized before main function
 * Return: nothing
 */

void _starter(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
