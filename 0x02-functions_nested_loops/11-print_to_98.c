#include "main.h"
/**
 * print_to_98 - prints all natural numbers
 * @n: integer
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i > 9)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				if (i != 98)
					putchar(',');
				putchar(' ');
			}
			else
			{
				putchar(i + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
}
