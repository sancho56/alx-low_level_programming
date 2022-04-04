#include <stdio.h>
/**
 * main - first 98 fibonacci series
 * Return: integer
 */
int main(void)
{
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long sum = first + second;
	int i;

	printf("%lu, %lu, ", first, second);

	for (i = 0; i < 98; i++)
	{
		first = second;
		second = sum;
		sum = first + second;

		printf("%lu", sum);

		if (i != 97)
			printf(", ");
	}

	printf("\n");
	return (0);
}
