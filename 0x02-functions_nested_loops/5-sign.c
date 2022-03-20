#include "main.h"
/**
 * print_sign - prints the sign of number
 * @n: integer
 * Return: 0 for zero, 1 for positive and -1 for negative
 */
int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		a = 1;
		putchar('+');
	}
	else if (n == 0)
	{
		a = 0;
		putchar('0');
	}
	else
	{
		a = -1;
		putchar('-');
	}
	return (a);
}
