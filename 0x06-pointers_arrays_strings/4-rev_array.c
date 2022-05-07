#include "main.h"
/**
 * reverse_array - reverse array of elements
 * @a: integer pointer
 * @n: number of elements
 * Description: reverse array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;

    for (i = n - 1; i > 0; i--)
    {
        putchar(a[i]);
    }
    putchar('\n');
}