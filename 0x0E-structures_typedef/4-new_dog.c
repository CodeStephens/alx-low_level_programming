#include "dog.h"

/**
 * _strcpy - copy a memory area from a string to another
 * @dest: string to copy memory area to
 * @src: string to copy memory area from
 *
 * Return: a pointer to a character containing the copied memory area
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - struct datatype for generic creation of a dog
 * @name: pointer to name of the dog
 * @age: pointer to age of the dog
 * @owner: pointer to owner of the dog
 *
 * Return: nothing!
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *_name;
	char *_owner;
	int i;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	i = 0;
	while (name[i] != '\0')
		i++;
	i++;
	_name = malloc(i * sizeof(*name));
	if (_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	i = 0;
	while (owner[i] != '\0')
		i++;
	i++;
	_owner = malloc(i * sizeof(*owner));
	if (_owner == NULL)
	{
		free(_owner);
		return (NULL);
	}
	_strcpy(_name, name);
	_strcpy(_owner, owner);
	new_dog->name = _name;
	new_dog->age = age;
	new_dog->owner = _owner;
	return (new_dog);
}
