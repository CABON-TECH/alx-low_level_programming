#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialises the variable of type struct dog
 * @d: a pointer to a variable of type struct dog
 * @name: a pointer to the name of the dog
 * @age: age of the dog
 * @owner: a pointer to the owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
