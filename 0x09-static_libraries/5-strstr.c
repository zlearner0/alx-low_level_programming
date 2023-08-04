#include "main.h"

/**
 * _strstr - scan 2 strings and gives string start string at common
 * @haystack: the initial string to be scanned
 * @needle: the string pattern to be totally checked
 * Return: pointer string for the result
*/

char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return ((char *)haystack);
}
while (*haystack)
{
char *h = haystack;
char *n = needle;
while (*h && *n && (*h == *n))
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return ('\0');
}
