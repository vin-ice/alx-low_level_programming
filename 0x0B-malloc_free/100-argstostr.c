#include <stdlib.h>
/**
*argstostr - concatenates all arguments of your program
*@ac: arguments count
*@av: vector of pointers to string
*Return: returns concatenated string
*/
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, size = 0;
	char *str_buffer;

	while (i < ac)
	{
		while (av[i][j])
		{
			size++;
			j++;
		}
		j = 0;
		i++;
	}
	j = 0;
	i = 0;
	str_buffer = (char *) malloc((sizeof(char) * size) + 1);
	while (i < ac)
	{
		while (av[i][j])
		{
			*str_buffer = av[i][j];
			str_buffer++;
			j++;
		}
		j = 0;
		i++;
	}
	return (str_buffer);
}
