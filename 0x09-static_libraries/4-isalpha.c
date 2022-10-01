/**
 * _isalpha - checks if a character is an alphabet
 * @c: character to be checked
 * Return: Reurns 1 if character is an alphabet else 0
 */
int _isalpha(char c)
{
	int c_val = (int) c;

	if (c_val >= 65 && c_val <= 90)
		return (1);
	if (c_val >= 97 && c_val <= 122)
		return (1);
	return (0);
}

