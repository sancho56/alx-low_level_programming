#include "main.h"
/**
 * print_squre - prints a square, followed by new line
 * @size: integer
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}

