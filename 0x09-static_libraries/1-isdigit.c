/**
 *_isdigit - checks for digit 0-9
 * @c: digit to check
 * Return: returns 1 if number else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
