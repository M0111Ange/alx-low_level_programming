#ifndef DOG_H
#define DOG_H

/**
 *struct dog - A dog structure
 *
 *@name: NAme of the dog
 *@age: Dog age
 *@owner: The name of dog's owner
 *Description: Each instance describes a dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char  *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
