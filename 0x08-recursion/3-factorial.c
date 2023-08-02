#include "main.h"
/**
 * factorial - calculate the factorial of a number
 * @n: the number to calculate the factorial for
 * Return: the result of factorial
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
