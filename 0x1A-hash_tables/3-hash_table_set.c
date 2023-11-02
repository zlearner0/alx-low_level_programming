#include "hash_tables.h"

/**
* hash_table_set - add or update a node to the table
* @ht: the input for hash table
* @key: the string of key
* @value: the value meets the key
* Return: one for success, zero for failing
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *head;

if (strcmp(key, "") == 0 || (!ht))
return (0);

new_node = malloc(sizeof(hash_node_t)); /* create, fill new node*/
if (!new_node)
return (0);
new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = NULL;

index = key_index((const unsigned char *)key, ht->size);
head = ht->array[index]; /* get node at index*/

if (!head) /*if not found set new node address to array element*/
{
ht->array[index] = new_node;
return (1);
}
else
return (add_node(ht, new_node, index));
}


/**
* add_node - add node to table where its index exists
* @ht: the input for hash table
 *@new_node: the new node to be added to the table
* @index: the index of that node
* Return: one for success, zero for failing
*/

int add_node(hash_table_t *ht, hash_node_t *new_node, unsigned long int index)
{

hash_node_t *node, *head;
head = ht->array[index];
node = head;

while (node)
{
if (strcmp(node->key, new_node->key) == 0) /*updat existing node value */
{
free(node->value);
node->value = strdup(new_node->value);
free_hash_node_t(new_node);
return (1);
}
node = node->next;
}
/*if key not found in looping, we add node to top of list*/
new_node->next = head;
ht->array[index] = new_node;
return (1);
}


/**
* free_hash_node_t - frees the required node
*@node: the required node to be deleted
* Return: nothing
*/
void free_hash_node_t(hash_node_t *node)
{
free(node->value);
free(node->key);
free(node);
}
