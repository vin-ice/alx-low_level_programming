#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - copies a string to a memory location
 * @str: String to copy to memory
 * Return: returns pointer to memory else NULL
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
