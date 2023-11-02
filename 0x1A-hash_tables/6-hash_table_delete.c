#include "hash_tables.h"

/**
* hash_table_delete - delete all nodes of a table
* @ht: the input for hash table
* Return: nothing
*/

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node, *tmp;
unsigned long int i;

if (!ht)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];

while (node)
{
tmp = node;
free(node->value);
free(node->key);
free(node);
node = tmp->next;
}

}
free(ht->array);
free(ht);
}
