/**
* _islower - checks for a lowercase character
* @c: character to be checked
* Return: returns 1 if lowercased else 0
*/
int _islower(char c)
{
	int c_val = (int) c;

	if (c_val >= 97 && c_val <= 122)
		return (1);
	return (0);
}
