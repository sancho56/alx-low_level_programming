#include "main.h"
#include <stdio.h>
/**
 * main - prints alphabet
 * Description: this program prints alpahbet in lowercase
 * Return: return 0
 */
void print_alphabet(void)
{
	/*Description: print alpahbet*/
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

