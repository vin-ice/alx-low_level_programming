/**
 * _strncpy - copies a string to a location
 * @dest: Destination location to copy string to
 * @src: Source string
 * @n: size of string to copy
 * Return: returns destination address
 */
char *_strncpy(char *dest, char *src, int n)
{
	while (n > 0)
	{
		if (*src == '\0')
			break;
		*dest++ = *src++;
		n--;
	}

	return dest;
}
