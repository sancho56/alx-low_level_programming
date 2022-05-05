#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: char pointer
 * @src: char pointer
 * @n: number of bytes of string to append
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
    
	char *file = dest;

	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; j < n; j++)
	{
		file[i] = src[j];
		i++;
	}
	return (file);
}