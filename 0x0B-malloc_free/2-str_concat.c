#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - concatenates two string
 * @s1: first string
 * @s2: second string
 *Return: returns pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	int size = 0, i = 0;
	char *str_buffer;

	while (*(s1 + i))
	{
		size++;
		i++;
	}
	i = 0;
	while (*(s2 + i))
	{
		size++;
		i++;
	}
	i = 0;
	str_buffer = (char *) malloc((sizeof(char) * size) + 1);
	if (str_buffer == NULL)
		return (NULL);
	while (*s1)
	{
	       *(str_buffer + i) = *s1;
       		s1++;
 		i++;		
	}
	while (*s2)
	{
		*(str_buffer + i) = *s2;
		s2++;
		i++;
	}
	return (str_buffer); 
}
