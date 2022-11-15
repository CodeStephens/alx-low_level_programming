#ifndef struct_dog
#define struct_dog

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
#include <stdio.h>

#endif /* struct_dog */
