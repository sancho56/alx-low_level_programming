#include "main.h"
/**
 * _strcat - concatenates strings
 * @dest: char pointer
 * @src: char pointer
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}

	for (j = -1; dest[j] != '\0'; j++)
	{
		src[i] = dest[j];
		i++;
	}
	return (src);
}
