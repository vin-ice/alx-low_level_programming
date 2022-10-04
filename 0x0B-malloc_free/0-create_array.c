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
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	else
	{
		while(i < size)
		{
			*(arr + i) = c;
			i++;
		}
	}
	return (arr);
}
