#include <stdio.h>
/**
 * main - prints prime factor
 * Return: 0
 */
int main(void)
{
	long long int n;
	int div = 2;
	int ans = 0; 
	int maxFact;
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

