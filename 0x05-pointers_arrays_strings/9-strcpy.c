#include "main.h"
/**
 * _strcpy - copies string
 * @dest: char pointer
 * @src: char pointer
 * Return: char pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
