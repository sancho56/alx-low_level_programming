#include "main.h"
/**
 * print_diagonal - draws diagonal line in terminal
 * @n: integer
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			putchar('\\');
		}
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}

