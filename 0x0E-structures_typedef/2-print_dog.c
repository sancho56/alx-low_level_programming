#include "dog.h"
/**
 * print_dog - prints struct dog
 * @d: struct dog pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)");
	else if (d->age == NULL)
		printf("Age: (nil)");
	else
		printf("Owner: (nil)");
}
