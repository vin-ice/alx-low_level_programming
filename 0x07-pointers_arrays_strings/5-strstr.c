/**
 * _strstr - finds first occurrence of substring
 * needle in string haystack
 * @haystack: string
 * @needle: string
 * Return: returns pointer to beginning of string ir NULL
 */
char *_strstr(char *haystack, char *needle)
{	
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
