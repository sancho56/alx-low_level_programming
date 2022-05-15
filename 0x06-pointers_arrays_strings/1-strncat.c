#include "main.h"
/**
 * _strncat - concatenates two strings
 * Return: char pointer
 * Description: the function to concatenate two strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{	
	}
	
    for (j = 0; src[j] != '\0' && j < n ; i++, j++)
	{
		dest[i] = src[j];
	}
    
	dest[i + j] = '\0';
	return (dest);
}
