#include "main.h"

/**
 * _puts - this is a fuction that puts strings
 * @str: a parameter to _puts functions
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
{
	_putchar(*str);
}
	_putchar('\n');
}
