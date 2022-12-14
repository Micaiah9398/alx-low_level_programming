#include "main.h"
/**
 * _isapha-checks for alphabets
 * @c: character to be checked
 *
 * Return: 1 if character ia a letter,0 otherwise
 */

int _ isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
