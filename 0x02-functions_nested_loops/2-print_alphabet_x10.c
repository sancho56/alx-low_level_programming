#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10() - prints 10 times alphabet
 * @void: nothing to pass
 *
 * Description: prints alphabet 10 times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char a;
	while (i < 10)
	{
		for (char a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		putchar('\n');
		i++;
	}
}

