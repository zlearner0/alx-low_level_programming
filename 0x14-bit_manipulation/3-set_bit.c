#include "main.h"
#include <stdio.h>
/**
 * set_bit - change bit to 1
 * @n: integer to adjust
 * @index: the counter
 * Return: 1 for success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n |= 1ul << index;
return (1);
}
