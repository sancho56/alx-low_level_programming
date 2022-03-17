#include "main.h"
#include <stdio.h>
/**
 * main - prints alphabet
 * Description: this program prints alpahbet in lowercase
 * Return: return 0
 */
/**
 * print_alphabet - print alphabet
 * Description: this funcition print alphabet
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

