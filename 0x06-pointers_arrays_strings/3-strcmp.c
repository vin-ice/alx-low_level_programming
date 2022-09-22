/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: returns 
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if ((int) *s1 == (int) *s2)
			continue;
		else
			return (int) *s1 - (int) *s2;
		s1++;
		s2++;
	}
	return 0;
}
