#include "hash_tables.h"

/**
* hash_djb2 - creates a hash for a string str
* @str: the input string to get a hash for
* Return: a hash number corresponding to the string str
*/

unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;

hash = 5381;
while ((c = *str++))
{
hash = ((hash << 5) + hash) +c; /* hash * 33 + c */
}
return (hash);
}
