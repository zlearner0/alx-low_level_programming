#include "main.h"

/**
 * prime_factor - print largest prime factor of an input
*/

void prime_factor(void)
{
long long int prime;
prime = 612852475143;
long long int i;
i = 2;
while (i <= prime)
{
if (prime % i == 0 && prime != i)
{
prime = prime / i;
i = 2;
}
else
{
i++;
}
}
printf("%llu\n", prime);
}