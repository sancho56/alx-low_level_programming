#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure type of dog
 * @name: char pointer
 * @age: float
 * @owner: char pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
