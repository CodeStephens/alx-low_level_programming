#include "dog.h"

/**
 * init_dog - struct dog initialization
 * @d: userdefined datatype dog
 * @name: second parameter
 * @age: third parameter
 * @owner: fourth parameter
 *
 * Return: nothing!
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
