#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: returns new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof *dog);
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
