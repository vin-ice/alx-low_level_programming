#include <stdlib.h>
/**
 *get_size - count characters in string
 *@s: string
 *
 * Return: returns size
 */
unsigned int get_size(char *s)
{
	unsigned int size = 0;

	while (*s)
	{
		size++;
		s++;
	}
	return (size);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string two
 * @n: length of s2 to append
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size, i = 0, j = 0;
	char *str_buffer;
	
	n = (get_size(s2) <= n) ? get_size(s2) : n;
	size = get_size(s1) + n + 1;
	str_buffer = malloc(sizeof *str_buffer * size);	
	if (str_buffer == NULL)
		return (NULL);
	else
	{
		while (*(s1 + i))
		{
			*(str_buffer + i) = *(s1 + i);
			i++;
		}
		for (j = 0;j < n; i++, j++)
			*(str_buffer + i) = *(s2 + j);
	}
	*(str_buffer + i) = '\0';
	return (str_buffer);
} 
