#include <stdio.h>
#include<stdlib.h>
/**
 * main - Utilizing main function to do the code
 * @argc: number of argv array elements
 * @argv: string array elements filled with command line
 * Return: Zero as the output is printed text
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
}
else
printf("error\n");
return (0);
}

