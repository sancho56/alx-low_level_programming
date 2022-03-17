#include "main.h"
#include <stdio.h>
/**
 * print_alphabet() - print alphabet
 * @void: nothing to pass
 *
 * Description: This function print alphabet in lowercase by looping
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

