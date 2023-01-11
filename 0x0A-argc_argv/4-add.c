#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>

/**
 * main - program that prints positive numbers
 * @argc: This argument count
 * @argv:This is the argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int b;
			char *str;

			str = argv[i];
			for (b = 0; str[b] != '\0'; b++)
			{
				if (str[b] < 48 || str[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

