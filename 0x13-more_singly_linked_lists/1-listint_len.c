#include "lists.h"
/**
 * listint_len - returns the number of elements in
 * a linked list.
 *@h: element in a link
 * Return: Always 0.
 */
size_t listint_len(cinst listint_t *h)
{
size_t i = 0;

while (h)
{
i++;
h = h->next;
}
return (i);
}
