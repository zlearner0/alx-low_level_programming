#include "main.h"
/**
 * is_prime_number - check if the given number is a prime
 * @n: the number to be checked
 * @x: the number to be compared with n
 * Return: the result
*/

int test_num(int n, int x);
int is_prime_number(int n)
{
return (test_num(n, 2));
}

/**
 * test_num - check the valid prime number
 * @n: the number to be checked
 * @x: the number to be compared with n
 * Return: the result
*/

int test_num(int n, int x)
{
if (x >= n && n > 1)
return (1);
else if (n % x == 0 || n <= 1)
return (0);
else
return (test_num(n, x + 1));
}
