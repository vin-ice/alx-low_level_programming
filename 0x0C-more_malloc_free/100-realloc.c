#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using
 * malloc and free
 * @ptr: pointer to memory previously allocated
 * @old_size: size in bytes of allocated space
 * @new_size: new size of new block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int size = (old_size < new_size) ? old_size : new_size, i;
	char *p, *oldp = ptr;
	
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);			
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (ptr == NULL)
		return (p);
	for (i = 0; i < size; i++)
		p[i] = oldp[i];
	free(ptr);
	return (p);


}
