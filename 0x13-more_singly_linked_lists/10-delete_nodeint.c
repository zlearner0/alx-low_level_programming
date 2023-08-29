#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * selector - get pointer of a node
 * @head: pointer to first node
 * @x: the index of a node to return
 * Return: pointer to node
*/

listint_t *selector(listint_t *head, int x)
{
int count = -1;
if (head == NULL)
return (NULL);
while (head != NULL)
{
count++;
if (count == x)
{
return (head);
}
head = head->next;
}
return (NULL);
}

/**
 * node_count - counts nodes of a list
 * @head: pointer to first node
 * Return: no. of nodes
*/
unsigned int node_count(listint_t *head)
{
unsigned int count = 0;
if (!head)
return (0);

while (head != NULL)
{
head = head->next;
count++;
}
return (count);
}

/**
 * delete_nodeint_at_index - delete a node in a list
 * @head: pointer to first node
 * @index: the index of  node to be deleted
 * Return: 1 for success, -1 for failing
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int nodes_num;
listint_t *target, *before_target, *starter;
starter = *head;
nodes_num = node_count(starter);
if (!*head || !head)
return (-1);
if (index == 0)
{
target = selector(starter, index);
*head = target->next;
free(target);
return (1);
}
if (index > 0 && index <= nodes_num)
{
before_target = selector(starter, index - 1);
target = selector(starter, index);
before_target->next = target->next;
free(target);
return (1);
}
return (-1);
}
