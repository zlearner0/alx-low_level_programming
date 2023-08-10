#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * stringToInteger - Converts a string to an integer
 * @str: The string to be converted
 * Return: The integer value of the string
 */

int stringToInteger(char *str)
{
int result = 0;
int sign = 1;
int i = 0;
if (str[i] == '+' || str[i] == '-')
{
if (str[i] == '-')
sign = -1;
i++;
}
while (str[i] != '\0')
{
if (str[i] < '0' || str[i] > '9')
{
printf("Error\n");
exit(98);
}
result = result * 10 + (str[i] - '0');
i++;
}
return (result *sign);
}

/**
 * main - Entry point of the program
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: 0 on success, 98 on error
 */

int main(int argc, char *argv[])
{
int j;
int i;
int sign;
int num1 = 0;
int num2 = 0;
int result = 0;
if (argc != 3)
{
printf("Error\n");
return (98);
}
for (i = 1; i < argc; i++)
{
j = 0;
sign = 1;
if (argv[i][j] == '+' || argv[i][j] == '-')
{
if (argv[i][j] == '-')
sign = -1;
j++;
}
while (argv[i][j] != '\0')
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (98);
}
num1 = num1 * 10 + (argv[i][j] - '0');
j++;
}
num1 = num1 *sign;
if (i == 1)
num2 = num1;
}
result = num1 *num2;
printf("%d\n", result);
return (0);
}
