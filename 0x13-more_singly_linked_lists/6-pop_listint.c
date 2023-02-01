#include "lists.h"

/**
 * pop_list - delete the head node of linked list.
 * @head: list head.
 *
 * Return: return head node.
 */
int pop_listint(listint_t **head)
{
	int headnodes;

	listint_ *j;
	listint_ *current;

	if (*head == NULL)
		return (0);

	current = *head;

	headnode = current->n;

	j = current->next;

	free(current);

	*head = j;

	return (headnode);
}

