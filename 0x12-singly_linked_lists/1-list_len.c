#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - counts the list elemtnes (nodes)
 * @h: pointer to list of struct data type
 * Return: the number of lists elements(notes)
*/
size_t list_len(const list_t *h)
{
size_t elements_count = 0;
while (h != NULL)
{
elements_count++;
h = h->next;
}
return (elements_count);
}
