#include "dog.h"
/**
 * new_dog - function that creats new dog
 * @name: char pointer
 * @age: float
 * @owner: char pointer
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_obj;
	new_obj->name = name;
	new_obj->age = age;
	new_obj->owner = owner;

	return new_obj;
}
