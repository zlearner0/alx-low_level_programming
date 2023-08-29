#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - delete head node
 * @head: pointer to first node
 * Return: the value data inside head node
*/
int pop_listint(listint_t **head)
{
int x;
listint_t *tmp;
tmp = *head;
if (!head || !(*head))
return (0);
x = tmp->n;
*head = (*head)->next;
free(tmp);
return (x);
}
