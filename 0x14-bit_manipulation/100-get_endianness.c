#include "main.h"
#include <stdio.h>
/**
 * get_endianness - tests  endianness
 * Return: zero for big one
 */
int get_endianness(void)
{
int x = 1;
char *p = (char *) &x;
if (*p == 1)
{
return (1);
}
else
{
return (0);
}
}
