#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - free struct list
 * @head: pointer to existing node
 * Return: nothing
*/

void free_listint2(listint_t **head)
{
listint_t *tmp;

if (!head)
return;
while (*head != NULL)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}
*head = NULL;
}
