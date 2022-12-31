#include <stdio.h>
/**
 * main - program that prints all possible different combinations
 * of thress digit.
 *
 * Return: 0
 */
int main(void)
{
int a;
int b;
int c;

for (a = 48; a < 58; a++)
{
for (b = 48; b < 58; b++)
{
if (b > a)
{
for (c = 48; c < 58; c++)
{
if (c > b)
{
putchar(a);
putchar(b);
putchar(c);
if (a == 55 && b == 56 && c == 57)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
