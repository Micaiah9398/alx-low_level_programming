#include "main.h"
#include <unistd.h>

/**
 * _putchar - to write the character c to stdout
 *@c: the character to print
 *
 * Return: On seccess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
