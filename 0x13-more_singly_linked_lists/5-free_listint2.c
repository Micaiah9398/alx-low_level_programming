#include "lists.h"
/**
 * free_listint- free a link
 * @head: head of list
 *
 * Return: no return
 */
void free_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *col;

	if (head != NULL)

	{
		col = *head;
		while ((temp = col) != NULL)
		{
		col = col->next;
		free(temp);
		}
		*head = NULL;
	}
}
