#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to a pointer to the head of the list.
 * @n: integer value to store in the new node.
 * Return: address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node = malloc(sizeof(listint_t));
if (node != NULL)
{
node->n = n;
node->next = NULL;
if (*head == NULL)
{
*head = node;
}
else
{
listint_t *tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = node;
}
return (node);
}
return (NULL);
}
