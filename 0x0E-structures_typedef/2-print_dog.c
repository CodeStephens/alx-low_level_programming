#include "dog.h"

/**
 * print_dog - prints the contents of a struct to the output terminal
 * @d: pointer to the memory area of the struct dog
 *
 * Return: nothing!
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
