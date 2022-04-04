#include <stdio.h>
/**
 * main - prints sum of even-valued fibonacci values
 * Return: integer
 */
int main(void)
{
	int i, first = 1, second = 2, sum = 0;
	sum = first + second;

	for (i = 3; sum < 4000000; i++)
	{
		first = second;
		second = sum;
		sum = first + second;

		if (sum % 2 == 0)
		{
			printf("%d", sum);
		}
	}
	return (0);
}
