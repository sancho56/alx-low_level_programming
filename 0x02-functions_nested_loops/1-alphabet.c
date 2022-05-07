#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - concatenates two strings
 *
 * Return: retutn char pointer
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

