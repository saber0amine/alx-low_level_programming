#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes a node at a given index
  * @head: pointer to a pointer to a head node
  * @index: integer, index of node to delete
  *
  * Return: integer, 1 on success else -1
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *iNode = *head, *prevNode = NULL;

	while (iNode && index > 0)
		prevNode = iNode, iNode = iNode->next, index--;

	if (index == 0 && iNode)
	{
		if (prevNode)
			prevNode->next = iNode->next;
		else
			*head = iNode->next;

		if (iNode->next)
			(iNode->next)->prev = prevNode;

		free(iNode);
		return (1);
	}

	return (-1);
}
}
