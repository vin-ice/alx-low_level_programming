#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory allocated to struct dog
 * @d: pointer to memory
 */
void free_dog(dog_t *d)
{
	free(d);
}
