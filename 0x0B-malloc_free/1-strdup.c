#include "main.h"
/**
 * _strdup - copy od string to newly allocated memory
 * @str: character pointer
 * Return: character pointer
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *p = malloc(sizeof(str));
	int i = 0;

	if (p != NULL)
	{
		while (i < sizeof(str))
		{
			p[i] = str[i];
			i++;
		}
	}
	return (p);
}
