#include "hash_tables.h"

/**
* hash_table_get - search for a node and get its value by its key
* @ht: the input for hash table
* @key: the string of key
* Return: string value
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *node;

if (!ht)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);

node = ht->array[index];
if (!node)
return (NULL);

while (node)
{
if (strcmp(node->key, key) == 0)
{
return (node->value);
}
node = node->next;
}
return (NULL);
}
