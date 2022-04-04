#include <stdio.h>
/**
 * main - prints sum of even-valued fibonacci values
 * Return: integer
 */
int main(void)
{
	int i;
       	int first = 1;
	int second = 2;
	int sum = 0;
	int evenSum = 0;

	sum = first + second;

	for (i = 3; sum < 4000000; i++)
	{
		first = second;
		second = sum;
		sum = first + second;

		if (sum % 2 == 0)
			evenSum =+ sum;
	}

	printf("%d", evenSum);
	return (0);
}
