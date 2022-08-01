#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: variable of type struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nill)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age != '\0')
		printf("Age: %.0f\n", d->age);
	else
		printf("Age: (nill)");
	if (d->owner == NULL)
		printf("Owner: (nill)");
	else
		printf("Owner: %s\n", d->owner);
}
