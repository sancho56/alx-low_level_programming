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

    for (i = n - 1; i >= 0; i--)
    {
        if (a[i] < 10)
        {
                putchar(a[i] + '0');
        }
        else if (a[i] < 99 && a[i] >= 10)                                                   
        {                                                         
                putchar((a[i] / 10) + '0');                          
                putchar((a[i] % 10) + '0');                          
        }
	    else if ( a[i] < 999 && a[i] >= 100)
	    {
                putchar((a[i] / 100) + '0');
                putchar(((a[i] / 10) % 10) + '0');                          
                putchar((a[i] % 10) + '0');
        }
        else if (a[i] < 9999 && a[i] >= 1000)
	    {
	            putchar((a[i] / 1000) + '0');
	            putchar(((a[i] / 100) % 10)  + '0');
                putchar(((a[i] / 10) % 10) + '0');                          
                putchar((a[i] % 10) + '0');
	    }
        
        putchar(' ');
    }
    putchar('\n');
}

int main()
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
    
    reverse_array(a, sizeof(a) / sizeof(int));
    return (0);
}