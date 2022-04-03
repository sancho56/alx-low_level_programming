#include "main.h"
/*
 * atoi - converts string to integer
 * @s: character pointer
 * Return: integer
 */
int _atoi(char *s)
{
	int i, sum = 0;
	int exist = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > '0' && s[i] < '9')
		{
			sum = sum * 10 + (s[i] - 48);
			exist = 1;
		}
	}

	if (exist == 0)
		return (0);
	else
		return (sum);
}
