#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - initializes a variable of type struct dog
 *
 *@d: The name of struct
 *@name: initialization name
 *@age: Initialization age
 *@owner: name of dog owner
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
