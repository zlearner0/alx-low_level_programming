#include "hash_tables.h"


/**
* shash_table_create - creates a hash table of pointers to nodes
* @size: the size of the dynamically array of pointers to nodes
* Return: a pointer to hash table
*/

shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *table;
shash_node_t **array;

table = malloc(sizeof(shash_table_t));
if (!table)
return (NULL);

array = malloc(size * sizeof(shash_node_t *));
if (!array)
{
free(table);
return (NULL);
}

table->array = array;
table->size = size;
table->shead = NULL;
table->stail = NULL;

return (table);
}

/**
* shash_table_set - add or update a node to the table
* @ht: the input for hash table
* @key: the string of key
* @value: the value meets the key
* Return: one for success, zero for failing
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *new_node, *head;
unsigned long int index;

if (strcmp(key, "") == 0 || (!ht))
return (0);

new_node = malloc(sizeof(shash_node_t));
if (!new_node)
return (0);
/*filling in new node*/
new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = NULL;
new_node->snext = NULL;
new_node->sprev = NULL;

index  = key_index((const unsigned char *)key, ht->size);
head = ht->array[index];

/*adding head node*/
if (!head)
{
ht->array[index] = new_node;
if (ht->array[index + 1]) /*check next node in the array*/
if (index != ht->size - 1)
new_node->next = ht->array[index + 1];
update_shead(ht);
update_stail(ht);
return (1);
}
else
return (a_head(ht, new_node, index));
}


/**
* a_head - add node to table where its index exists
* @ht: the input for hash table
 *@new_node: the new node to be added to the table
* @index: the index of that node
* Return: one for success, zero for failing
*/

int a_head(shash_table_t *ht, shash_node_t *new_node, unsigned long int index)
{
shash_node_t *head;
head = ht->array[index];

/*comapre head with new node key, add it as head */
if (head->key[0] > new_node->key[0])
{
new_node->next = head->next;
new_node->snext = head;
head->sprev = new_node;
ht->array[index]  = new_node;
update_shead(ht);
update_stail(ht);
return (1);
}
/* equal keys replace value of head only, delete new node */
if (head->key[0] == new_node->key[0])
{
free(head->value);
head->value = strdup(new_node->value);
free(new_node->value);
free(new_node->key);
free(new_node);
update_shead(ht);
update_stail(ht);
return (1);
}
return (a_node(ht, new_node, index));
}

/**
* a_node - add node to table where its index exists
* @ht: the input for hash table
 *@new_node: the new node to be added to the table
* @index: the index of that node
* Return: one for success, zero for failing
*/

int a_node(shash_table_t *ht, shash_node_t *new_node, unsigned long int index)
{
shash_node_t *node, *head;
head = ht->array[index];
node = head;
/*insert the new node upon its key before compared one*/
/*starting with second node*/
while (node)
{
if (node->key[0] > new_node->key[0])
{
new_node->snext = node;
new_node->sprev = node->sprev;
node->sprev = new_node;
update_shead(ht);
update_stail(ht);
return (1);
}
/* update value of existing node*/
if (node->key[0] == new_node->key[0])
{
free(node->value);
node->value = strdup(new_node->value);
free(new_node->value);
free(new_node->key);
free(new_node);
update_shead(ht);
update_stail(ht);
return (1);
}
node = node->snext;
}
/*here key is begger than all nodes keys */
return (a_tail(ht, new_node, index));
}


/**
* a_tail - add node to table where its index exists
* @ht: the input for hash table
 *@new_node: the new node to be added to the table
* @index: the index of that node
* Return: one for success, zero for failing
*/

int a_tail(shash_table_t *ht, shash_node_t *new_node, unsigned long int index)
{
shash_node_t *node, *head;
head = ht->array[index];
node = head;

while (node->snext)/* get last node*/
{
node = node->snext;
}
new_node->sprev = node;
node->snext = new_node;
update_shead(ht);
update_stail(ht);
return (1);
}

/**
* update_shead - update the table value for shead
* @ht: the input for hash table
* Return: nothing
*/

void update_shead(shash_table_t *ht)
{
unsigned long int i;
for (i = 0; i < ht->size; i++)
{
if (ht->array[i])
{
ht->shead = ht->array[i];
return;
}
}
}


/**
* update_stail - update the table value for stail
* @ht: the input for hash table
* Return: nothing
*/

void update_stail(shash_table_t *ht)
{
shash_node_t *node;

unsigned long int i;
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node)
{
ht->stail = node;
node = node->snext;
}
}
}

/**
* shash_table_get -  gives a value for a given key
* @ht: the input for hash table
 *@key: the input key to get corrsponding value
* Return: string value
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int index, i;
shash_node_t *node;

if (!ht)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);

node = ht->array[index];
if (!node)
return (NULL);

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node)
{
if (strcmp(node->key, key) == 0)
{
return (node->value);
}
node = node->snext;
}
}
return (NULL);
}

/**
* shash_table_print -  print table nodes ascendingly
* @ht: the input for hash table
* Return: nothing
*/

void shash_table_print(const shash_table_t *ht)
{
unsigned long int i;
shash_node_t *node;
int count = 0;
if (!ht)
return;

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
printf(", '%s': '%s'", node->key, node->value);

node = node->snext;
}
}
printf("}\n");
}

/**
* shash_table_print_rev -  print table nodes descendingly
* @ht: the input for hash table
* Return: nothing
*/

void shash_table_print_rev(const shash_table_t *ht)
{
int i;
shash_node_t *node, *tmp;
int count = 0;
if (!ht)
return;

printf("{");
for (i = (int)ht->size - 1; i >= 0; i--)
{
node = ht->array[i];
while (node)
{
tmp = node;
node = node->snext;
}
while (tmp)
{
if (count == 0)
{
printf("'%s': '%s'", tmp->key, tmp->value);
count++;
}
else
printf(", '%s': '%s'", tmp->key, tmp->value);
tmp = tmp->sprev;
}
}
printf("}\n");
}

/**
* shash_table_delete - delete all nodes of a table
* @ht: the input for hash table
* Return: nothing
*/

void shash_table_delete(shash_table_t *ht)
{
shash_node_t *node, *tmp;
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
