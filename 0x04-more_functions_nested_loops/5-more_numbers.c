#include "main.h"
/**
 * more_numbers - prints from 0 to 14 10x
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			putchar(j + '0');
		}
		putchar('\n');
	}
	putchar('\n');	
}
