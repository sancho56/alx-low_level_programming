#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: char pointer
 * @src: char pointer
 * @n: number of bytes of string to append
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
