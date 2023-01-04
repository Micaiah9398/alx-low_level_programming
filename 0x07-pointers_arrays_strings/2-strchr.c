#include "main.h"
/**
 * _strchr - locates a string
 * @c: occurances of the character in a string
 *
 * @s: in the string
 *
 * Return: a pointer to the first occurance of the character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s! = c)
			s++;
		else
			return (s);
	}
	if (c =='\0')
		return (s);

	return (NULL);
}
