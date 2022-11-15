#ifndef struct_dog
#define struct_dog

void init_dog(struct dog *d, char *name, float age, char *owner);
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

#endif /* struct_dog */
