#include "main.h"
/**
 * _strcpy - copies string to another
 * @dest: Receiving address
 * @src: Source address
 * Return: Returns dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;
	
	while (*src != '\0')
		*(dest + count) = *(src + count);
	return (dest);
}
