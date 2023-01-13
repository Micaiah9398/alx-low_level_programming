#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocate memory
 * @b: amount of bytes.
 *
 * Return: pointer to the allocated memory
 * if malloc fails, status value is equal 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
