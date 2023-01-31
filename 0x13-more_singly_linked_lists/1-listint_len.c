#include "lists.h"
/**
 * listint_len - returns the number of elements in
 * a linked list.
 *@h: element in a link
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
int t i = 0;

while (h ! = NULL)
{
i++;
h = h->next;
}
return (i);
}
