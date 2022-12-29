#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

for (tens = '0'; tens <= '9'; tens++)/*prints tens digit*/
	{
		for (ones = '0'; ones < '9'; ones++)/*prints ones digits*/
	{
		if (!((ones == tens) || (tens > ones)))/*eliminates repitition*/
		{
			putchar(tens);
			putchar(ones);

			if (!(ones == '9' && tens == '8'))/*addes comma amd space*/
			{
				putchar (',');
				putchar('');
			}
		}
	}
}
putchar(',');
return (0);
}
