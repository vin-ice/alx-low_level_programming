/**
 * _strstr - finds first occurrence of substring
 * needle in string haystack
 * @haystack: string
 * @needle: string
 * Return: returns pointer to beginning of string ir NULL
 */
char *_strstr(char *haystack, char *needle)
{	
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
