#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - reverse list elements order
 * @head: pointer to first node
 * Return: pointer to the head node
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *in, *out;
in = NULL;
while (*head != NULL)
{
out = (*head)->next;
(*head)->next = in;
in = *head;
*head = out;
}
*head = in;
return (*head);
}
