#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print the alphabet, in lowercase, followed by a new line
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

