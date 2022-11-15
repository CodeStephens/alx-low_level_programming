#include "dog.h"

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");
	else
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->name);
		if (d.age == NULL);
			printf("(nil)\n");
		else
			printf("%lf\n", d.age);
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->owner);
}
