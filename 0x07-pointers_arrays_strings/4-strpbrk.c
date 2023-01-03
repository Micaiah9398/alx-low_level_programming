#include "main.h"

/**
 * _stepbrk - function that searches for any of a set byte
 * @s: first occurance in the string
 *
 *accept: matches one of the byte
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
