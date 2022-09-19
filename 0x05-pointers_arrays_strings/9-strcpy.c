#include "main.h"
/**
 * _strcpy - copies string to another
 * @dest: Receiving address
 * @src: Source address
 * Return: Returns dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
