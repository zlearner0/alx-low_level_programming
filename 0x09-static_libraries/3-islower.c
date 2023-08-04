#include "main.h"

/**
 * _islower - using ASCII numbers for lower case letter
 * @c: user input to check the lower case
 *
 * Return: 1 for lower case, 0 if not
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
