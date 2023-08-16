#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: integer for number of arguments
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int (*ptr)(int, int), a, b;
if (argc != 4)
printf("Error\n"), exit(98);
a = atoi(argv[1]);
b = atoi(argv[3]);
ptr = get_op_func(argv[2]);
if (!ptr)
printf("Error\n"), exit(99);
if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
printf("Error\n"), exit(100);
printf("%i\n", ptr(a, b));
return (0);
}
