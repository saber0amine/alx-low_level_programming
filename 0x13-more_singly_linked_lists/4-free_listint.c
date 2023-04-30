#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @tmp:a current node to track all the list.
 * @head: header of the list.
 */

void free_listint(listint_t *head)
{
listint_t *tmp = head;
while (tmp != NULL)
{
head = head->next;
free(tmp);
tmp = head;
}
}
