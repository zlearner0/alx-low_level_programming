#include "main.h"
#include <stdio.h>

/**
 * get_bit - the bit correspoindig to index
 * @n: integer to adjust
 * @index: the counter
 * Return: 1 for success
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
return ((n >> index) & 1);
}
