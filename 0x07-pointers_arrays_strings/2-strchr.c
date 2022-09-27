/**
 * _strchr - returns a pointer to the first occurrence of character
 * @s: String containing characters
 * @c: character to find
 * Return: returns irst instance of c
 */
char *_strchr(char *s, char c)
{
	if (c == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
