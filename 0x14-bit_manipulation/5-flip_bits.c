#include "main.h"
#include <stdio.h>
/**
 * flip_bits - flipper from no. to no.
 * @n: no.1
 * @m: no.2
 * Return: bit no. to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int out = n ^ m;
unsigned int x = 0;
while (out)
{
x += out & 1;
out >>= 1;
}
return (x);
}
