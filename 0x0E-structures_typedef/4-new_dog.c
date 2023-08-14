#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 *new_dog - Creates a new dog
 *@name: The name of the dog
 *@age: The age of the dog
 *@owner: The owner of the dog
 *Return: an object of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = malloc((sizeof(char) * strlen(name)) + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = strcpy(my_dog->name, name);
	my_dog->owner = malloc((sizeof(char) * strlen(owner)) + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = strcpy(my_dog->owner, owner);
	my_dog->age = age;
	return (my_dog);
}
