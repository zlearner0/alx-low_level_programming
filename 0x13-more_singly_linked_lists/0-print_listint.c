#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print list elements
 * @h: pointer to node
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h != NULL)
{
printf("%i\n", h->n);
num++;
h = h->next;
}
return (num);
}
