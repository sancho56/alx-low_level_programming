#include "main.h"
/**
 * _strdup - copy od string to newly allocated memory
 * @str: character pointer
 * Return: character pointer
 */
char *_strdup(char *str)
{
	char *p = (char *) malloc(sizeof(str));
	long unsigned int i = 0;

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
