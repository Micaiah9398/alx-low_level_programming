#include "main.h"

/**
 * _strstr - locate substring
 *
 * @haystack: the longer string to search
 * @needle: the first occurance of substring
 *
 * Return: a pointer beg of substring or @ Null if it not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
	i	haystack = bhaystack + 1;
	}
	return (0);
}
