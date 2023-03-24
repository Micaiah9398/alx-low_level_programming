#include "main.h"

/**
 * _memcpy - function that copies @n byte from memory area
 * @src to memory area @dest
 * @n: function copies
 * @src: byte from memomry area
 * @dest: to memory area
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
			i++;
	}
	return (dest);
}
