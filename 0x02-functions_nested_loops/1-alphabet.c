#include "main.h"
#include <stdio.h>
/**
 * print_alphabet() - print alphabet
 * @arg1: void nothing to pass
 * 
 * This funcition print alphabet in lowercase by looping through every point
 * Context: no sleeping
 * Return: void
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

