/**
 * _strcat - concatenates two string
 * @dest: String to append to
 * @src: Source string being apppended
 * Return: returns dest string
 */
char *_strcat(char *dest, char *src)
{
	int length, j;
	
	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
