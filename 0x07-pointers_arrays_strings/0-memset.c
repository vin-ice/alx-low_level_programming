/**
 * _memset - fills memory with a constant byte
 * @s: address of memory area
 * @b: constant to copy
 * @n: size of memory area to occupy
 *
 * Return: returns pointer to memory area 
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (--n)
		*(s + n) = b;
	return s;
}
