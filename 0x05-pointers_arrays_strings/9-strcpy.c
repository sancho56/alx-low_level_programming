#include "main.h"
/**
 * _strcpy - copies string
 * @dest: char pointer
 * @src: char pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\n'; i++)
	{
		dest[i] = src[i];
	}
	putchar('\n');
}
