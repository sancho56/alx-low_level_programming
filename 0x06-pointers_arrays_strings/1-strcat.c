#include "main.h"
/**
 * _strcat - appends src string
 * @dest: char pointer
 * @src: char pointer
 * Description: This will append string
 * Return: char pointer
 */
char *_strcat (char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++);

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
