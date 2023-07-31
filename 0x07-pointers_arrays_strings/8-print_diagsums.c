#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - get the sum of diagonals of square array
 * @a: pointer to a square array
 * @size: the no. of rows or columns of aray
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
int i, j, sum1, sum2;
sum1 = 0;
sum2 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i ==  j)
{
sum1 += *(a + i * size + j);
}
if (j + i  == size - 1)
{
sum2 += *(a + i * size + j);
}
}
}
printf("%i, %i\n", sum1, sum2);
}
