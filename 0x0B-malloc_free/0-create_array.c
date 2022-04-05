#include "main.h"
/**
 * create_array - creates array of chars
 * @size: unsifned int
 * @c: character
 * Return: pointer char
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *) malloc(size);
	unsigned int i = 0;

	if (p != NULL)
	{
		while (i < size)
		{
			p[i] = c;
			i++;
		}
	}
	if (size == 0)
		return (NULL);
	else
		return (p);
}
