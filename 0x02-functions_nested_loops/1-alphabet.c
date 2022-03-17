#include "main.h"
#include <stdio.h>
/**
 * main - prints alphabet
 * Description: this program prints alpahbet in lowercase
 * Return: return 0
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	for (char i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

