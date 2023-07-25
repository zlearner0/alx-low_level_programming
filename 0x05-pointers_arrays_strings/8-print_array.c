#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
* print_array - prints n elements of an array
* @a: pointer to an integer array
* @n: the number of elements requried to print
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != n - 1)
printf("%i, ", a[i]);
else
printf("%i", a[i]);
}
printf("\n");
}
