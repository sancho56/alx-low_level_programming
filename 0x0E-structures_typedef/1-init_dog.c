#include "dog.h"
/**
 * init_dog - initalize a variable of type struct dog
 * @d: pointer of struct dog
 * @name: pointer char
 * @age: float
 * @owner: pointer char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
