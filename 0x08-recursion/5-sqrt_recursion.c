#include "main.h"
/**
 * _pow_recursion - calculate the value of x raised to the power of y
 * @x: the number of the base
 * @y: the power for the base number
 * Return: the result of raised power
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
int x = _sqrt_recursion(n / 2);
if (x * x <= n && x < n + 1)
{
return (x + 1);
}
else
{
return (_sqrt_recursion(n / 2));
}
}
