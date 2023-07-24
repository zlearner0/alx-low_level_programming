#include "main.h"

/**
* swap_int - swap variable values using pointer dereference
* @a: first pointer input to be interchanged with second
* @b: second pointer input to be interchanged with first
*/

void swap_int(int *a, int *b)
{
int substitute;
substitute = *a;
*a = *b;
*b = substitute;
}
