#include "main.h"
/**
 * cap_string - capatalize the first letter of word 
 * @ch: character pointer
 * Return: character pointer
 */
char *cap_string(char *ch)
{
    int i;
    int c;

    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == 32)
        {
            c = 1;
            continue;
        }

        if (c == 1)
        {
            if (ch[i] > 90)
                ch[i] = ch[i] - 32;
            c = 0;
        }
        ch[i] = ch[i];
    }

    return (ch);
}