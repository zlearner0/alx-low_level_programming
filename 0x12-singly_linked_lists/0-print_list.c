#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints all elements of a list
 * @h: pointer to list of struct data type
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
size_t nodes_count = 0;
while (h != NULL)
{
printf("[%u]", h->len);
if (h->str == NULL)
printf(" (nil)\n");
else
printf(" %s\n", h->str);
nodes_count++;
h = h->next;
}
return (nodes_count);
}
