#include "main.h"
/**
 * str_concat - concatenates two string
 * @s1: char pointer
 * @s2: char pointer
 * Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	int a = strlen(s1) + 1;
	int b = strlen(s2) + 1;
	int c = a + b;
	char *p = (char *) malloc(c);
	int i;

	if (p == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		p[i] = *(p + i);

	return p;
}
