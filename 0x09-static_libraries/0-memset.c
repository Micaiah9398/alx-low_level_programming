#include "main.h"

/**
 * _memset - functions that fills memory with a constant byte.
 * @s: memory area to return
 * @b: constant byte
 * @n: size of byte
 * Return: a pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
