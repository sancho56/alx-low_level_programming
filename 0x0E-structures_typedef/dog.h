#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - structure type of dog
 * @name: char pointer
 * @age: float
 * @owner: char pointer
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
