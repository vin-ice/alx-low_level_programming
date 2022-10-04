#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - copies a string to a memory location
 * @str: String to copy to memory
 * Return: returns pointer to memory else NULL
 */
char *_strdup(char *str)
{	char *str_buffer;
	int size = 0, i = 0;

	while (*(str + i))
	{
		size++;
		i++;
	}
	i = 0;
	str_buffer = (char *) malloc(size * sizeof(char) + 1);
	if (str_buffer == NULL)
		return (NULL);
	else
	{
		while (i < size)
		{
			*(str_buffer + i) = *(str + i);
			i++;
		}
		*(str_buffer + i) = '\0';
	}
	return (str_buffer);
}
