#include "main.h"
/**
 * _sqrt_recursion - calculate the square root of a number
 * @n: the number for square calculation
  * @y: the number to be check for square
 * Return: the result of square root
*/

int power2(int n, int y);
int _sqrt_recursion(int n)
{
return (power2(n, 1));
}

/**
 * power2 - check if number can be squared
 * @n: the number for square calculation
 * @y: the number to be check for square
 * Return: the result of square
*/

int power2(int n, int y)
{
if (y * y == n)
return (y);
else if (y * y < n)
return (power2(n, y + 1));
else
return (-1);
}
