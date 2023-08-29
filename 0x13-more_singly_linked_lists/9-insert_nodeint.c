#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert node in a list
 * @head: pointer to first node
 * @idx: the index of new node
 * @n: the integer data of the new node
 * Return: pointer to the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *starter;
unsigned int count = 0;
starter = *head;
if (!n)
return (NULL);
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
if (*head == NULL) /* in case no any node */
{
*head = new;
new->next = NULL;
return (new);
}
while (starter != NULL)
{
if (count == idx && idx == 0) /* add first node */
{
new->next = starter;
*head = new;
return (new);
}
if (count == idx - 1) /* add inner node */
{
new->next = starter->next;
starter->next = new;
return (new);
}
count++;
starter = starter->next;
}
if (count + 1 == idx) /* add last node */
{
starter->next = new;
new->next = NULL;
return (new);
}
return (NULL); /* if (count + 1 < idx) */
}
