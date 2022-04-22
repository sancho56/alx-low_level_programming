#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog struct
 * @d: struct dog pointer
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}