#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
/**
 * main - Utilizing main function to do the code
 * @argc: number of argv array elements
 * @argv: string array elements filled with command line
 * Return: Zero as the output for success and 1 if failed
*/

int main(int argc, char *argv[])
{
if (argc == 1)
{
printf("0\n");
return (0);
}
int sum = 0;
int i, j;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}

