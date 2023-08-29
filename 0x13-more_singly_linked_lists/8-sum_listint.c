#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - get the sum of struct int data
 * @head: pointer to existing node
 * Return: sum of all integer data of the list
*/
int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
