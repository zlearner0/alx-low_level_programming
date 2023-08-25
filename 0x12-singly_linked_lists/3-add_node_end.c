#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen2 - calculates string length
 * @str: the input string
 * Return: string length
*/
int _strlen2(const char *str)
{
int i;
if (!str)
return (0);
for (i = 0; str[i] != '\0'; i++)
;
return (i);
}





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
new->len = _strlen2(str);
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
