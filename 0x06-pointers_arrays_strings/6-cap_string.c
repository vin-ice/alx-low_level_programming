/**
 * cap_string - capitalizes all words of a string
 * @n: String
 * Return: returns string array
 */
char *cap_string(char *n)
{
	int  h_sep = 0;
	int i = 0;
	int n_val;

	while (n[i])
	{
		n_val = (int) n[i];

		if (n[i] == ',' || n[i] == ';' || n[i] == '.' || n[i] == '!' || n[i] == '?' || n[i] == '\"' || n[i] == '(' || n[i] == ')' || n[i] == '{' || n[i] == '}' || n[i] == ' ' || n[i] == '\t' || n[i] == '\n')
			h_sep = 1;
		if (n_val < 123 && n_val > 96)
		{
			if (h_sep)
			{
				n[i] = (char) (n_val - 97) + 65;
				h_sep = 0;
			}
		}
		if (n[i] < 91 && n[i] > 64)
		{
			h_sep = 0;
		}
		i++;
	}
	return n;
}
