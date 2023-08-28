#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - add node at list start
 * @head: pointer to existing node
 * @n: the int value inside the struct
 * Return: pointer to newly added point
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new || !head)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}
