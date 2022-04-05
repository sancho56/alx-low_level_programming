#include "main.h"
/**
 * create_array - creates array of chars
 * @size: unsifned int
 * @c: character
 * Return: pointer char
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char*) malloc(size);
	int i = 0;

	while (i < size)
	{
		p[i] = c[i];
		i++;
	}
	if (sizeof(*p) == 0)
		return (NULL);
	else
		return *p;
}
