#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a structure dog
 * @d: structure
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
		printf("Age: %s\n", (!d->age) ? "(nil)" : ftoa(d->age));
		printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
	}
	
}
