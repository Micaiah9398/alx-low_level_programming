#include "main.h"

/**
 * print_triangle - entry point
 * description: prints digonals
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)

{

	int row, hashes, space;

	if (size <= 0)
	{
	_putchar('\'_);
	}
	else
	{
		for (row = 1; row <= size; row++)
			{
			for (space = size - row; space >= 1; space--)
			{
				_putchar(' ');
			}
				for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
