#include <stdio.h>
#include "main.h"

/**
 * main - Utilizing main function to do the code
 *
 * Descripion: Using printf for the output
 *
 * Return: Zero as the output is printed text
*/

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 15 != 0)
printf("%s", "Fizz");
else if (i % 5 == 0 && i % 15 != 0)
printf("%s", "Buzz");
else if (i % 15 == 0)
printf("%s", "FizzBuzz");
else
{
printf("%i", i);
}
if (i != 100)
printf("%s", " ");
}
printf("\n");
return (0);
}
