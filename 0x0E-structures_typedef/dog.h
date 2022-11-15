#ifndef struct_dog
#define struct_dog

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - userdefined datatype dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description:
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* struct_dog */
