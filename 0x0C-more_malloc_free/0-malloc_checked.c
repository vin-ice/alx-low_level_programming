#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 *@b: size to allocate
 *
 * Return: returns pointer to memory else 98
 */
void *malloc_checked(unsigned int b)
{
	void* buffer = malloc(b);

	if (buffer == NULL)
		exit (98);
	else
		return (buffer);
}
