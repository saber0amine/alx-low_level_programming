#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @tmp:a current node to track all the list.
 * @q:a node that pont to current node for free.
 * @head: header of the list.
 */



void free_listint(listint_t *head)
{
listint_t *tmp = head;
listint_t *q = head;

if (head == NULL)
{
free(tmp);
}
else
{
while (tmp->next != NULL)
{
tmp = q;
tmp = tmp->next;
free(q);
}
}
}
