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
int mult;
if (argc == 3)
{
mult = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mult);
return (0);
}
else
{
printf("error\n");
return (1);
}
}

