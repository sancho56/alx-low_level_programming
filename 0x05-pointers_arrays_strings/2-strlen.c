#include "main.h"
/**
 * _strlen - prints the length of string
 * @s: character
 * Return: integer
 */
int _strlen(char *s)
{
	int sum = 0;
	int i;

	for (i = 1; i <= s; i++)
	{
		sum += i;
	}
	return (sum);
}
