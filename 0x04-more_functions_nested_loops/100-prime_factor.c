#include <stdio.h>
#include <cmaths>
/**
 * print - print the largest prime factorof the numbers
 *
 * Return: int return 1 otherwise 0
 */
void largest_prime_factor(int n)
{
	while (n%2 == 0)
	{
		cout << 2 << " ";
		n/ = 2;
	}
	for(int i =3 ; i<= sqrt(n); i = i+2)
	{
		while(n% i == 0)
		{
			cout<< i << " ";
			n/=i;
		}
	}
	if(n>2)
		cout
			<< n << " ";
}
int main()
{
	largestprimefactor(600851475143);
}

