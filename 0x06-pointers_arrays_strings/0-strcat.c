/**
 * _strcat - concatenates two string
 *
 * @dest: String to append to
 * @src: Source string being apppended 
 * Return: returns dest string
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, i = 0, j = 0;
	
	while(dest[i])
	{
		if (dest[i] == ' ' && count == 0)
		{
			count++;
			i++;
			continue;
		}
		if (dest[i] == ' ' && count == 1)
		{
			if (*(src + j) == '\n' || *(src + j) == '\0')
			{
				dest[i] = '\0';
				break;
			}
			dest[i] = *(src + j);
			j++;
		}
		i++;
	}
	return (dest);
}
