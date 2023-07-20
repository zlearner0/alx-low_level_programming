#include "main.h"

/**
 * _isupper - check if the letter us uppercase
 * @c: the input to be checked if uppoercase or not
 * Return: 1 if uppercase otherwise 0
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
