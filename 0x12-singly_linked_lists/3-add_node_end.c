#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add a node to single linked list
 * @head: pointer to list of struct data type
 * @str: string to be add to struct member
 * Return: the pointer to added node
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *tmp = *head;
new = malloc(sizeof(list_t));
if (!new || !head)
return (NULL);
if (str)
{
new->str = strdup(str);
if (!new->str)
{
free(new);
return (0);
}
new->len = _strlen(str);
}
new->next = NULL;
if (tmp)
{
while (tmp->next)
tmp = tmp->next;
tmp->next = new;
}
else
*head = new;
return (new);
}
