#include "main.h"
#include <unistd.h>

/**
* _puts - prints a string from a pointer to string
* @str: pointer to string array
*/

void _puts(char *str)
{
while (*str != '\0')
{
write(1, str, 1);
str++;
}
write(1, "\n", 1);
}
