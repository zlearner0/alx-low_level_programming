#include "main.h"

/**
 * _abs - using if statement for absolute number
 * @n: user input to check the number sign
 *
 * Return: positive for positive or negative, 0 for 0
*/

int _abs(int n)
{
if (n < 0)
return (-n);
else if (n > 0)
return (n);
else
return (0);
}
