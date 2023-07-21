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

long int prime;
long int i;
prime = 612852475143;
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
printf("%lu\n", prime);


return (0);
}
