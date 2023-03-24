#include "main.h"
/**
 * _strcpy - copier of string pointed to variable
 * @dest: facts
 * @src: ready to code
 * Return: same copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
