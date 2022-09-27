/**
 * _strstr - finds first occurrence of substring
 * needle in string haystack
 * @haystack: string
 * @needle: string
 * Return: returns pointer to beginning of string ir NULL
 */
char *_strstr(char *haystack, char *needle)
{	
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}

	return ('\0');
}
