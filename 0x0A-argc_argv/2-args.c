#include <stdio.h>
/**
 * main - Utilizing main function to do the code
 * @argc: number of argv array elements
 * @argv: string array elements filled with command line
 * Return: Zero as the output is printed text
*/

int main(int argc, char *argv[])
{
int i;
if (argc > 1)
{
for (i = 1; i < argc ; i++)
{
printf("%s\n", argv[i]);
}
}
return (0);
}

