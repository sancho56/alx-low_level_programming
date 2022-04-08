#include "main.h"
/**
 * malloc_checked - funcition that allocate memory
 * @b: unsigned int
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p != NULL)
		return p;
	else
		exit(98);
}
