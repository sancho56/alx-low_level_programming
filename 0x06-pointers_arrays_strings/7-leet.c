#include "main.h"
/**
 * leet - multiples two integers
 * @n: integer a
 * Return: integer
 */

char *leet(char *ch)
{
    char encode[] = "a4A4e3E3o0O0t7T7l1L1";
    int i;
    int j;

    for (i = 0; ch[i] != '\0'; i++)
    {
        for (j = 0; encode[j] != '\0'; j++)
        {
            if (ch[i] == encode[j])
            {
                ch[i] = encode[j + 1];
                break;
            }
        }
    }
    return (ch);
}
