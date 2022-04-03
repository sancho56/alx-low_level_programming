#include "main.h"
/**
 * print_last_digit - prints the last digit of number
 * @n: integer
 * Return: integer
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}

	if (n > 1000)
	{
		_putchar((n % 1000) + '0');
		return (n % 1000);
	}

	_putchar((n % 10) + '0');
	return (n % 10);
}
