/**
 * _memset(char *s, char b, unsigned int n) - fills memory with a constant byte
 * @s: address of memory area
 * @b: constant to copy
 * @n: size of memory area to occupy
 * Return: 
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		*(s + n) = b;
		n--;
	}
	return s;
}
