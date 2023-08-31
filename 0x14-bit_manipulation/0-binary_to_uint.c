#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert to positive int
 * @b: string of binary digits zeros and ones
 * Return: converted unsigned int number
*/
unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int n = 0;
if (!b)
return (0);
for (x = 0; b[x] != '\0'; x++)
{
if (b[x] < 48 || b[x] > 49)
return (0);
n = n * 2 + b[x] - '0';
}
return (n);
}
