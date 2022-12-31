#include <stdio.h>

/**
 * main - prints all possible combination of two two-digit numbers.
 *
 * Return : Always 0 (Success)
 */
int main(void)
{
int q;
int w;

for (q = 0; q < 100; v q++)
{
for (w = 0; w < 100 w++)
{
if (w > q)
{
putchar(q / 10 + '0');
putchar(q % 10 + '0');
putchar(' ');
putchar(w / 10 + '0');
putchar(q % 10 + '0');

if (q * 100 + w != 9899)
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
