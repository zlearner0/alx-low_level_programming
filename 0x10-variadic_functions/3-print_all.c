#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * dt - struct for data type and their function
 * @symbol: string symbol for the data type
 * @f: pointer to function
 * Return: nothing
*/

typedef struct data_type 
{
char *symbol;
void (*f)(va_list);
} dt;

/**
 * print_char - print input
 * @args: the list of arguments
 * Return: nothing
*/

void print_char(va_list args)
{
printf("%c, ", va_arg(args, int));
}

/**
 * print_integer - print input
 * @args: the list of arguments
 * Return: nothing
*/
void print_integer(va_list args)
{
printf("%i, ", va_arg(args, int));
}

/**
 * print_float - print input
 * @args: the list of arguments
 * Return: nothing
*/
void print_float(va_list args)
{
printf("%f, ", va_arg(args, double));
}

/**
 * print_string - print input
 * @args: the list of arguments
 * Return: nothing
*/
void print_string(va_list args)
{
printf("%s, ", va_arg(args, char *));
}

/**
 * print_all - print input
 * @format: any type of format
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
dt print_type[] = {
{"c", print_char},
{"i", print_integer},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
};
int i = 0, j = 0, len = 0;
while (format[len] != '\0')
len++;
va_list args;
va_start(args, format);
while (i < len)
{
j = 0;
while (print_type[j].symbol)
{
if (format[i] == print_type[j].symbol[0])
print_type[j].f(args);
j++;
}
i++;
}
va_end(args);
printf("\n");
}


