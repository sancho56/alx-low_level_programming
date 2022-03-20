#include "main.h"
/**
 * print_last_digit - prints the last digit of number
 * @n: integer
 * Return: integer
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = n * -1;
	}

	n = n % 10;
	a = n * 11;
	return (n);
}
