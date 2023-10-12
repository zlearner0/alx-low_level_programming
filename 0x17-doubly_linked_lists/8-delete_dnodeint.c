#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: reference to head
 *@index: index of a node to be deleted
 * Return: 1 for success, -1 for failing
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *current = (*head);

if (!(*head))
return (1);
while (current)
{
if (count == index)
{
if (current->prev)/*update prev node*/
current->prev->next = current->next;

if (current->next)/*update next node*/
current->next->prev = current->prev;

/*assign head to next node if we delete head*/
if (count == 0)
(*head) = current->next;

free(current);

return (1);
}
current = current->next;
count++;
}
return (-1);
}
