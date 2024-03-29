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

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
