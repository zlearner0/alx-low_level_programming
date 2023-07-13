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
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: ", sizeof(float));
	return (0);
}
