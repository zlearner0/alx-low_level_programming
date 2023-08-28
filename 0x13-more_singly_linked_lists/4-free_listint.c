#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - free struct list
 * @head: pointer to existing node
 * Return: nothing
*/
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
