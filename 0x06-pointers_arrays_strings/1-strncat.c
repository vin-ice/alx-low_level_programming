/**
 * _strncat - concatenates n-size string to destination
 * @dest: Destination string to append to
 * @src: String to append to dest
 * @n: size of src string to append
 * Return: returns string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;
	
	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
