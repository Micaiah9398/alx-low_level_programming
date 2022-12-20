#include "main.h"
#include <string.h>

/**
 * print_rev - printing a string in reverse
 * @s: the string to be printed in reverse
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;
	for (i = n - l; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
