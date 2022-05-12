#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: char pointer
 * @src: char pointer
 * @n: integer number
 * Description: the function to concatenate two strings
 * Return: char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++);
	
    for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
    dest[i + j] = '\0';

	return (dest);
}
