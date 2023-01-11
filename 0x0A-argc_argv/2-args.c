#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the argument a programe recieves.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always (0) success.
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
