#include "main.h"

/**
 * _pow_recursion - print a fuction that returns less than 1
 * @y: pow
 * @x: exponentiation
 * Return: return x value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
