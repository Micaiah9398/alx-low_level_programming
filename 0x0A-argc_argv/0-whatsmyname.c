#include <stdio.h>

/**
 * main - write a program that prints its name, follow by a new line.
 * if you rename the program,it will print a new line name, without
 * * having to compile it agan.
 * * Remove the path way from the name of the ptogram
 *
 * * @agrc: argument count
 * @argv: argument vector
 *
 * Return: 0
 *
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
