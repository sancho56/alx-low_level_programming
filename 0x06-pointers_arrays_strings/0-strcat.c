#include "main.h"
/**
 * _strcat - concatenates strings
 * @dest : char pointer
 * @src : char pointer
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	
	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}

