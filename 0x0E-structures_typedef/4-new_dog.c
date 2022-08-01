#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: pointer to the new dog or NULL if the function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;

	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	dog->name = malloc(sizeof(name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	else
	{
		for (i = 0; name[i] != '\0'; i++)
			dog->name[i] = name[i];
	}
	dog->name[i] = '\0';

	dog->owner = malloc(sizeof(owner));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	else
	{
		for (i = 0; owner[i] != '\0'; i++)
			dog->owner[i] = owner[i];
	}

	dog->age = age;

	return (dog);
}
