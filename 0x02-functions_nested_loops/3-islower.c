#include "main.h"
/**
 * _islower - checks for lowercase char
 * @c - integer
 * Return: 0 for not lowercase and 1 for lowercase char
 */
int _islower(int c)
{	
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

