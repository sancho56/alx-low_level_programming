#include "main.h"
/**
 * print_triangle - prints a triangle, followed by new line
 * @size: integer
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 0; i < size; i++)
	{
		for (j = 2 * (size - i); j > 0; j--)
		{
			putchar(' ');
		}
		for (k = 0; k < i; k++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}

