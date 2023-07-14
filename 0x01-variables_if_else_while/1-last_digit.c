#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Utilizing main function to do the code
 *
 * Descripion: Getting the last digit of a number
 *
 * Return: Zero depending on printing values
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int m = n % 10;
if (m > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, m);
else if (m == 0)
printf("Last digit of %i is 0 and is 0\n", n);
else if (n != 0 && m < 6)
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);
return (0);
}
