#include "main.h"

/**
 * rev_string - reversing a string
 * @s: parameter char s
 */
void rev_string(char *s)
{
	char jaf;

	int i length1, length2;

	length1 = 0;
	length2 = 0;

	while (s[length1] != '\0')
		length++;

	lenght2 = length1 - 1;
	for (i = 0; i < length1 / 2; i++)
	{
		jaf = s[i];
		s[i] = s[length2];
		s[lenght2] = jaf;
		length2 -= 1;
	}
}
