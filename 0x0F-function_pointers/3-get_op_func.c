#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - run the operation upon user choice
 * @s: pointer to string
 * Return: the result of operation
*/

int(*get_op_func(char *s))(int, int)
{
int i;
i = 0;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
while (i < 5)
{
if (s && s[0] == ops[i].op[0] && !s[1])
return (ops[i].f);
i++;
}
return (NULL);
}
