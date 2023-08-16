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
op_t ops[6];
ops[0].op = "+";
ops[0].f = op_add;
ops[1].op = "-";
ops[1].f = op_sub;
ops[2].op = "*";
ops[2].f = op_mul;
ops[3].op = "/";
ops[3].f = op_div;
ops[4].op = "%";
ops[4].f = op_mod;
ops[5].op = NULL;
ops[5].f = NULL;
while (i < 5)
{
if (s && s[0] == ops[i].op[0] && !s[1])
return (ops[i].f);
i++;
}
return (NULL);
}
