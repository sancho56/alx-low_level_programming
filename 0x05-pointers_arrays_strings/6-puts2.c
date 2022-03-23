#include "main.h"
/**
 * puts2 - prints even string
 * @str: char pointer
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
