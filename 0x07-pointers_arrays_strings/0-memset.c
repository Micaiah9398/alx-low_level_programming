#include<main.h>

/**
 * _memset - functions that fills memory with a constant byte.
 * @s: memory area to return
 * @b: constant byte
 * @n: size of byte
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i += 1;
	}
	return (s);
}
