#include "hash_tables.h"

/**
* key_index - gives index corresponding the the string key
* @key: the input string key to get its index
* @size: the array size
* Return: the index to be used in the array [lays in range size]
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash, index;

hash = hash_djb2(key);

index = hash % size;

return (index);
}
