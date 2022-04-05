#include "main.h"
/**
 * _strdup - copy od string to newly allocated memory
 * @str: character pointer
 * Return: character pointer
 */
char *_strdup(char *str)
{
	unsigned long int m;
	char *p;
	unsigned long int i = 0;

	for (m = 0; str[m] != '\0'; m++)
	{
	}
	p = (char *) malloc(m * sizeof(str));

	if (str == NULL)
		return (NULL);

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
