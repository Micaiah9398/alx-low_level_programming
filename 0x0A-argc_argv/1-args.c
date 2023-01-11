#include <stdio.h>
/**
 * main - write a program that prints number of arguments passed into it.
 * the program is to be followed by a new line.
 * @args: This is an argument count
 * @argv: This is an argument vector
 *
 * Return: 0
 *
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
