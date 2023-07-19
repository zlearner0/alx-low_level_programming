#include "main.h"

/**
 * _isalpha - using ASCII numbers for alphabet letter
 * @c: user input to check the alphabet
 *
 * Return: 1 for alphabet, 0 if not
*/

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
