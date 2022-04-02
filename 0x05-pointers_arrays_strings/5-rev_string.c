#include "main.h"
/**
 * rev_string - reverse a string
 * @s: character pointer
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int a;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (a = i - 1; a >= 0; a--)
	{
		putchar(a + '0');
		putchar('\n');
		putchar(s[a]);
	}
}
