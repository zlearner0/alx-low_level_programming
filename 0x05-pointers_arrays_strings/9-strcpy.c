#include "main.h"
#include <unistd.h>

/**
* *_strcpy - copy a string to another named string
* @dest: the empty string array needs to be filled
* @src: the string source to be copied
* Return: a copy of the source string in char
*/

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}
