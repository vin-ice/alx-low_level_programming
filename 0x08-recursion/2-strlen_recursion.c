/**
 * _strlen_recursion - retruns length of a string
 * @s: String to get lenght from
 * Return: returns length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s++));
	else
		return (0);
}
