#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: a string to be encoded
 * Return: an encoded string
*/
char *leet(char *s)
{
int i = 0;
int j = 0;
char *leet = s;
while (s[i])
{
if (s[i] == 'a' || s[i] == 'A')
leet[j] = '4';
else if (s[i] == 'e' || s[i] == 'E')
leet[j] = '3';
else if (s[i] == 'o' || s[i] == 'O')
leet[j] = '0';
else if (s[i] == 't' || s[i] == 'T')
leet[j] = '7';
else if (s[i] == 'l' || s[i] == 'L')
leet[j] = '1';
else
leet[j] = s[i];
i++;
j++;
}
leet[j] = '\0';
return (leet);
}
