#include "main.h"

/**
 * cap_string - converts string to uppercase consider sepcial characters
 * @str: lower case string to be converted to uppercase
 * Return: a string of uppercase
*/

char *cap_string(char *str)
{
int i = 0;
int upper = 1;
while (str[i])
{
if (upper && str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
upper = 0;
switch (str[i])
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '\"':
case '(':
case ')':
case '{':
case '}':
upper = 1;
break;
}
i++;
}
return (str);
}
