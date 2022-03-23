#include "main.h"
/**
 * puts_half - prints half of string
 * @str: char pointer
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	if (n % 2 == 0)
		n = i / 2;
	else
		n = (i - 1) / 2;

	for (n; str[n] != '\0'; n++)
	{
		putchar(str[n]);
	}
	putchar('\n');
}
