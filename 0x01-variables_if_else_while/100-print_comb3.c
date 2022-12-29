#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	num1 = 48;

	while (num1 < 57)
	{
		num2 = 48;
		while (num2 < 57)
		{
			putchar(num1);
			putchar(num2);
			num2++;
			putchar(',');
			putchar(' ');
		}
		num1++;
	}
	putchar('\n');
	return (0);
}

