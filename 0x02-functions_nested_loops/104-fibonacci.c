#include <stdio.h>
/**
 * main - first 98 fibonacci series
 * Return: integer
 */
int main(void)
{
	double first = 1;
	double second = 2;
	double sum = first + second;
	int i;

	printf("%lf, %lf, ", first, second);

	for (i = 0; i < 98; i++)
	{
		first = second;
		second = sum;
		sum = first + second;

		printf("%lf", sum);

		if (i != 97)
			printf(", ");
	}

	printf("\n");
	return (0);
}
