#include "main.h"
#include <unistd.h>

/**
* _atoi - extract numbers from a string
* @s: the string array uncluding numbers
* Return: the number from string with its sign
*/

int _atoi(char *s)
{
int i;
int out = 0;
int x = 1;
for (i = 0; *(s + i) != '\0'; i++)
{
if (*(s + i) >= 48 && *(s + i) <= 57)
{
if (i > 0 && *(s + i - 1) == '-')
{
x = -1;
}
out = (out * 10) + (*(s + i) - '0');
if (*(s + i + 1) < 48 || *(s + i + 1) >  57)
{
break;
}
}
}
return (x *out);
}
