#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog data type
 * @name: name of the dog
 * @age:cage of the dog
 * @owner: owner of the dog
 * Description: a dog datatype including three members
 */

struct dog
{
	char *name;
	double age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
