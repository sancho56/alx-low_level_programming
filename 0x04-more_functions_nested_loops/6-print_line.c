#include "main.h"

/**
 * print_line - draws a straight line in terminal
 * Return: void
 */
void print_line(int n)
{
	int i;

	for  (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}

