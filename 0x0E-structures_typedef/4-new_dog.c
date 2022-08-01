#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int len(char *s);
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

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len(name) + 1));
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

	dog->owner = malloc(sizeof(char) * (len(owner) + 1));
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
	dog->owner[i] = '\0';

	dog->age = age;

	return (dog);
}

/**
 * len - calculates length of string
 * @s: the string
 * Return: length of the string
 */
int len(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}
