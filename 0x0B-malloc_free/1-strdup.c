#include "main.h"
/**
 * _strdup - copy od string to newly allocated memory
 * @str: character pointer
 * Return: character pointer
 */
char *_strdup(char *str)
{
	int m;
	char *p;
	int i = 0;

	if (str == NULL)
		return (NULL);

	for (m = 0; str[m] != '\0'; m++)
	{
	}
	m =+ 1;
	p = (char *) malloc(m);

	if (p != NULL)
	{
		while (i < m)
		{
			p[i] = str[i];
			i++;
		}
	}
	return (p);
}
