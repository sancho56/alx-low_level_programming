#include "main.h"
/**
 * print_number - prints a integer
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	if (n > 0)
	{
		n *= -1;
		putchar("-");
		if (n > 9)
			putchar((n / 10) + '0');
		putchar((n % 10) + '0');
	}
	else if (n <= 0 && n > 9)
		putchar(n);
	else
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
	}
}
