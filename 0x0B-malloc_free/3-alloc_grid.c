#include "main.h"
/**
 * alloc_grid - return pointer to 2 dimen-array
 * @width: integer
 * @height: integer
 * Return: pointer of pointer integer
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int *wid = (int *) malloc(width);
	int *hei = (int *) malloc(height);
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = a[*wid][*hei];

	for (i = 0; i < *wid; i++)
	{
		for (j = 0; j < *hei; j++)
		{
			a[i][j] = 0;
		}
	}

	if (a == NULL)
		return (NULL);

	return a;
}
