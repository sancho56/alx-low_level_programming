#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints 10 times alphabet, in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char a;

	while (i < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		putchar('\n');
		i++;
	}
}

