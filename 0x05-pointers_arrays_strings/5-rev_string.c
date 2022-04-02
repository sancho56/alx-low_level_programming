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

	for (a = i; a > 0; a--)
	{
		if (a == 0)
			break;

		putchar(s[a]);
	}
}
