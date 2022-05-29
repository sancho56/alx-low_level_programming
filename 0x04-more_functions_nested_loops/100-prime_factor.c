#include <stdio.h>
/**
 * main - prints prime factor
 * Return: 0
 */
int main(void)
{
	long n;
	long div = 2;
	long ans = 0; 
	long maxFact;
	n = 612852475143;
	
	while (n != 0)
	{
		if (n % div != 0)
		{
			div += 1;
		}
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%d", maxFact);
				ans = 1;
				break;
			}
		}
	}
	return (0);
}

