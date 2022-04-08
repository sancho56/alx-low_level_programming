#include "main.h"
/**
 * string_nconcat - function concatenates string
 * @s1: char pointer
 * @s2: char pointer
 * @n: unsigned int
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m = strlen(*s1) + 1;
	unsigned int o = strlen(*s2) + 1;
	int *p = realloc(s1, o * n);

	if (p == NULL)
		return NULL;
	else
		return p;
}
