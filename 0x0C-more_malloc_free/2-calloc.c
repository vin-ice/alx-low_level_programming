#include <stdlib.h>
/**
 * _calloc - allocates memory space for an array
 * @nmemb: numberr of elements in array
 * @size: size of each element in bytes
 *
 * Return: returns pointer to allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof nmemb * size);
	if (p == NULL)
		return (NULL);
	while (i <= size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
