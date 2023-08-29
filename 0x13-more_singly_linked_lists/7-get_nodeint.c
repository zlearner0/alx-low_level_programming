#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - get the node of its index
 * @head: pointer to existing node
 * @index: the index of the required node in a list
 * Return: pointer to the node chosen by index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
if (head == NULL)
return (NULL);
while (head != NULL)
{
if (count == index)
{
return (head);
}
head = head->next;
count++;
}
/* if (index > count) */
return (NULL);
}
