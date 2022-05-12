#include "main.h"
/**
 * string_toupper - convert lowercase to uppercase
 * @n: string to be converted
 * Return: character pointer
 */
char *string_toupper(char *n)
{
    int i;

    for (i = 0; n[i] != '\0'; i++)
    {
        if (n[i] >= 97 && n[i] <= 122)
        {
            putchar((n[i] - 32) + '0');
        }
    }
    putchar('\n');
}
