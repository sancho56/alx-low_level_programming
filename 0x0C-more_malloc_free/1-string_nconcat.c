#include "main.h"
#include <string.h>
/**
 * string_nconcat - function concatenates string
 * @s1: char pointer
 * @s2: char pointer
 * @n: unsigned int
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m = strlen(s1) + 1;
	unsigned int o = strlen(s2) + 1;
	char *p = (char *) realloc(s1, o * n);
	int i;

	for (i = 0; i != '\0'; i++)
		p[i] = p(i + 1);

	if (p == NULL)
		return NULL;
	else
		return p;
}
