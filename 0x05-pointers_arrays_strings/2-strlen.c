/**
 * _strlen - returns the length of a string
 * @s: points to location of a string variable
 * Return: returns length of variable *s
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0'){
		counter++;
	}

	return (counter);
}
