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
		for (i = n; n <= 98; n++)
		{
			if (i > 9)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar(n + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
}
