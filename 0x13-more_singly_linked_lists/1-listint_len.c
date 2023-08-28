#include "lists.h"
#include <stdio.h>

/**
 * listint_len - counts nodes of a list
 * @h: pointer to node
 * Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h != NULL)
{
num++;
h = h->next;
}
return (num);
}
