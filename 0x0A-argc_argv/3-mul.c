#include <stdio.h>
#include<stdlib.h>
/**
 * main - Utilizing main function to do the code
 * @argc: number of argv array elements
 * @argv: string array elements filled with command line
 * Return: Zero as the output for success and 1 if failed
*/

int main(int argc, char *argv[])
{
int i, mult;
mult = 1;
if (argc > 1)
{
for (i = 1; i < argc ; i++)
{
mult *= atoi(argv[i]);
}
printf("%i\n", mult);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}

