/**
 * _strpbrk - locates the first occurrence in s of any 
 * of bytes in string accept
 * @s: String
 * @accept: collection of charactes
 * return: returns pointer to byte in s
 * that matches one of bytes ub accept 
 * or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		while (accept[i])
		{
		       if (*s == accept[i])
		       {
			       return (s);
		       }
		       i++;
		}
		i = 0;
		s++;
	}
	return ('\0');
}
