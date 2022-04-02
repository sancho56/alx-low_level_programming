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
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	char m[i];

	for (a = i; a > 0; a--)
	{
		m[c] = s[a];
		c++;
	}
	s = m[c];
	putchar('\n');
}
