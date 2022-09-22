/**
 * string_toupper - converts lowercased letters to uppercase
 * @n: String
 * Return: returns capitalized string
 */
char *string_toupper(char *n)
{
	int n_val, i = 0;

	while (n[i])
	{
		n_val = (int) n[i];
		if (n_val < 123 && n_val > 96)
			n[i] = (char) (n_val - 97) + 65;
		i++;	
	}
	return (n);
}
