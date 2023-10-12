#include "lists.h"

/**
 * get_dnodeint_at_index - get node at spedific index
 * @head: the pointer to head
 * @index: the required index of a node
 * Return: pointer to node of the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
int count = -1;
while (head)
{
count++;
if (count == index)
return (head);
head = head->next;
}
return (NULL);
}
