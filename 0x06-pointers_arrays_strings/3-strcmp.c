#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1 : char pointer
 * @s2 : char pointer
 * Description: the function to compare two strings
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
    while ((*s1 != '\0' && *s2 != '\0' ) && *s1 == *s2)
    {
        s1++;
        s2++;
    }

    if (*s1 == *s2)
    {
        return (0);
    }
    else
    {
        return (*s1 - *s2);
    }
}
