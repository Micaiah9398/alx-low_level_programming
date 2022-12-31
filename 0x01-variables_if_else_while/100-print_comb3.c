#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
int num1, num2;

num1 = 0;

for (char num1 = '0'; num1 < '9'; num1++)
{
for (char num2 = num1 + 1; num2 <= '9'; num2++)
{
putchar(num1);
putchar(num2);
num2++;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
