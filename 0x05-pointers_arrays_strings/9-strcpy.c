#include "main.h"
/**
 * _strcpy - copies string to another
 * @dest: Receiving address
 * @src: Source address
 * Return: Returns dest
 */
char *_strcpy(char *dest, char *src)
{
	do{
	*dest = *src;
	} while (*(dest++) != '\0');

	return (dest);
}
