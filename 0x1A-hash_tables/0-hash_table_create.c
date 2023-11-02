#include "hash_tables.h"

/**
* hash_table_create - creates a hash table of pointers to nodes
* @size: the size of the dynamically array of pointers to nodes
* Return: a pointer to hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_node_t **array;
 /*create pointer to struct table*/
hash_table_t *table = malloc(sizeof(hash_table_t));

if (!table)
return (NULL);

/* creat empty dynamic array its elements no. = size */
array = malloc(size * sizeof(hash_node_t *));
if (!array)
{
free(table);
return (NULL);
}

table->array = array;
table->size = size;

return (table);
}
