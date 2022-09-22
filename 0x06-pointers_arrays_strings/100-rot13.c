/**
 * rot13 - encodes a string using ROT13
 * @n: String to encode
 * Return: returns encoded string
 */
char *rot13(char *n)
{
	int n_val;

	while (*n)
	{
		n_val = (int) *n;

		if (n_val > 64 && n_val < 91)
			*n = (char) 65 + ((n_val - 65 + 13) % 26);
		else if (n_val > 96 && n_val < 123)
			*n = (char) 97 + ((n_val - 97 + 13) % 26);
		n++;
	}

	return n;
}
