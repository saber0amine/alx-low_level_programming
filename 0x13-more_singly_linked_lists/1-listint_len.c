#include "lists.h"

/**
 * listint_len -parcour of list
 * @h: The list to print
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}

