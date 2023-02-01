#include "lists.h"
/**
 * free_listint- free a link
 * @head: head of list
 *
 * Return: no return
 */
void free_listint(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);

	}
}
