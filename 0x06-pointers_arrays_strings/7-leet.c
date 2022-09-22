/**
 * leet - encodes a string into 1337
 * @n: String
 * Return: formatted string
 */
char *leet(char *n)
{int stringCount, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	stringCount = 0;
	while (s[stringCount] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == s[stringCount])
			{
				s[stringCount] = leetNums[leetCount];
			}
			leetCount++;
		}
		stringCount++;
	}
	return (s);
}
