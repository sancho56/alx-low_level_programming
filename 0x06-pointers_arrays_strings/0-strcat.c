#include "main.h"
/**
 * _strcat - concatenates strings
 * @dest: the destination string
 * @src: the source string
 * Description: the function to concatenate strings
 * Return: char pointer
 * 
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}