#include "dog.h"
#include <stdio.h>
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
	{
		printf("Name: (nil)");
		return;
	}
	else if (d->age == NULL)
	{
		printf("Age: (nil)");
		return;
	}
	else
	{
		printf("Owner: (nil)");
		return;
	}

	printf("Name: %s\n", d->name);
	printf("Age: %lf\n", d->age);
	printf("Owner: %s", d->owner);
}
