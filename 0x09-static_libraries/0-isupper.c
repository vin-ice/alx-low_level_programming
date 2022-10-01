#include "main.h"
/**
 * _isupper - checks whether the character passed is in uppercase
 * @c: character to check
 * Return: Returns 1 if truea else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
