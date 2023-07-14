#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Utilizing main function to do the code
 *
 * Descripion: Check number sign
 *
 * Return: Zero depending on printing values
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
printf("%i is zero\n", n);
if (n < 0)
printf("%i is negative\n", n);
if (n > 0)
printf("%i is positive\n", n);
return (0);
}
