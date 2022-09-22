/**
 * _strncat - concatenates n-size string to destination
 * @dest: Destination string to append to
 * @src: String to append to dest
 * @n: size of src string to append
 * Return: returns string
 */
char *_strncat(char *dest, char *src, int n)
{	
	int i = 0, j = 0, count = 0;

	while (dest[i])
	{
		if (dest[i] == ' ' && count == 0)
		{
			i++;
			count++;
			continue;
		}
		if (dest[i] == ' ' && count == 1)
		{
			if (n > 0)
				dest[i] = src[j];
			if (n == 0)
			{
				dest[i] = '\0';
				break;
			}
			n--;
			j++;
		}
		i++;
	}
	return dest;
}
