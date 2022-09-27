/**
 * _strspn - gets length of a prefix substring
 * @s: Strng
 * @accept: comparison string
 * Return: returns number of bytes in s which conssits only of
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int sm_count = 0, i = 0;

	while (*s)
	{
		while (*(accept + i))
		{
			if (*s == accept[i])
			{
				sm_count++;
				i = 0;
				break;	
			}
			i++;
		}
		s++;
	}
	return (sm_count);
}
