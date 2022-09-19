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
	
	do {
		*(dest + count) = *(src + count);
		count++;
	} while (*(src + count) != '\0');
	return (dest);
}
