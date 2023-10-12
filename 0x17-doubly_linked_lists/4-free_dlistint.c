#include "lists.h"

/**
 * free_dlistint - free linked list all nodes
 * @head: the pointer to head
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *next;
while (head)
{
next = head->next;
free(head);
head = next;
}
}
