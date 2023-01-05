#include "main.h"

/**
 * _factorial - function should return an error
 * @n: input numer
 * Return: factorial of number.
 */
int factorial(int n)
{
	if ( n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else 
		return (n * factorial(n - 1));
}
