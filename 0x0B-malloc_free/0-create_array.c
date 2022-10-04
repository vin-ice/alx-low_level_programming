#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates an array of characters and 
 * inititalizes with a specific char
 * @size: size of array
 * @c: character to initialize the array
 * Return: returns null if size is 0
 * pointer ir NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
