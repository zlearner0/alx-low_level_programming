#include "main.h"

/**
 * reverse_array - reverse integer elements of an array
 * @a: is the original integer array
 * @n: is the number of elements of the array
*/

void reverse_array(int *a, int n)
{
int i, substitute;
for (i = 0; i < n / 2; i++)
{
substitute = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = substitute;
}
}
