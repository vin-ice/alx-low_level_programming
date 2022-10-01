#include "main.h"
/**
 * _strncpy - copies a string to a location
 * @dest: Destination location to copy string to
 * @src: Source string
 * @n: size of string to copy
 * Return: returns destination address
 */
char *_strncpy(char *dest, char *src, int n)
{
	int byteCount;
	for (byteCount = 0; byteCount < n && src[byteCount] != '\0'; byteCount++)
		dest[byteCount] = src[byteCount];
	for (; byteCount < n; byteCount++)
		dest[byteCount] = '\0';
	return (dest);
}
