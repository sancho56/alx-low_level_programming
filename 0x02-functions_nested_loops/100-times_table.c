#include "main.h"

/**
 * print_times_table - prints the n times of number
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				printf("%d", i * j);
			else
				printf("  %d", i * j);
			if (j != n)
				printf(", ");
		}
		printf("\n");
	}
}
