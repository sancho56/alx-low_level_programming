#include "main.h"
/*
 * _atoi - converts string to integer
 * @s: character pointer
 * Return: integer
 */
int _atoi(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i > '0' && i < '9')
		{
			putchar(i + '0');
		}
	}
	putchar('\n');
}
