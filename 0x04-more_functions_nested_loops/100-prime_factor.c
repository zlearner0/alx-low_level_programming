#include <stdio.h>

/**
 * main - Utilizing main function to do the code
 *
 * Descripion: Using printf for the output
 *
 * Return: Zero as the output is printed text
*/

int main(void)
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
printf("%i\n", prime);
return (0);
}
