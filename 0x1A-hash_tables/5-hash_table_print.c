#include "hash_tables.h"

/**
* hash_table_print - prints all nodes of a table
* @ht: the input for hash table
* Return: nothing
*/

void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
int count;
hash_node_t *node;

if (!ht)
return;

count = 0;
printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];

while (node)
{
if (count == 0)
{
printf("'%s': '%s'", node->key, node->value);
count++;
}
else
{
printf(", '%s': '%s'", node->key, node->value);
}
node = node->next;
}
}
printf("}\n");
}
