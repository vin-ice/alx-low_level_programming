/**
 * _memcpy - copies memory area
 * @dest: Destination to recieve copy
 * @src: Source of data
 * @n: Size of bytes to be copied
 * Return: returns pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
		*(dest + n) = *(src + n);
	return (dest);
}
