#include "main.h"

/**
 * print_numbers - prints the number from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int i;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
}

