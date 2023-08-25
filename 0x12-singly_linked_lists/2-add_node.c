#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>


/**
 * _strlen - calculates string length
 * @str: the input string
 * Return: string length
*/
int _strlen(const char *str)
{
int i;
if (!str)
return (0);
for (i = 0; str[i] != '\0'; i++)
;
return (i);
}

/**
 * add_node - add a node to single linked list
 * @head: pointer to list of struct data type
 * @str: string to be add to struct member
 * Return: the pointer to added node
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));
if (!new || !head)
return (NULL);
if (str)
{
new->str = strdup(str);
new->len = _strlen(str);
}
new->next = *head;
*head = new;
return (new->next);
}
