#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of a linked list
 * @head: pointer to a pointer of the start of the list
 *
 * @n: n element
 *
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

