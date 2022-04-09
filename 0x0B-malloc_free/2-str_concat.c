#include "main.h"
/**
 * str_concat - concatenates two string
 * @s1: char pointer
 * @s2: char pointer
 * Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	int a = strlen(s1);
	int b = strlen(s2) + 1;
	int c = a + b;
	char *p = (char *) malloc(c);
	int i;

	if (s1 == NULL)
		*s1 = "";
	else if (s2 == NULL)
		*s2 = "";

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		*(p + i) = s1[i];

	for (i = 0; s2[i] != '\0'; i++)
	{
		*(p + a) = s2[i];
		a++;
	}
	return (p);
}
