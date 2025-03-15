#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: a pointer to the new dog_t or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len = 0, owner_len = 0;
	int i;

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->name = malloc(name_len + 1);
	dog->owner = malloc(owner_len + 1);
	if (!dog->name || !dog->owner)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		dog->name[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		dog->owner[i] = owner[i];

	dog->age = age;
	return (dog);
}
