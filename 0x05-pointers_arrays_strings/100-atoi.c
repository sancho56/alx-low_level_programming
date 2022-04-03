#include "main.h"
/*
 * atoi - converts string to integer
 * @s: character pointer
 * Return: integer
 */
int _atoi(char *s)
{
	int i;
	int exist = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > '0' && s[i] < '9')
		{
			i = i + '0';
			exist = 1;
		}
	}

	if (exist == 0)
		return (0);
	else
		return (i);
}
