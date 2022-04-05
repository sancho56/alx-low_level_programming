#include "main.h"
/**
 * _strdup - copy od string to newly allocated memory
 * @str: character pointer
 * Return: character pointer
 */
char *_strdup(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++);

	char *p = (char *) malloc(m * sizeof(str));
	unsigned long int i = 0;

	if (p != NULL)
	{
		while (i < sizeof(str))
		{
			p[i] = str[i];
			i++;
		}
	}

	if (str == NULL)
		return (NULL);
	else
		return (p);
}
