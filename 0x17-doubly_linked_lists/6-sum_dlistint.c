#include "lists.h"

/**
 * sum_dlistint - get sum of all nodes data int
 * @head: the pointer to head
 * Return: summation of all integer data n
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
