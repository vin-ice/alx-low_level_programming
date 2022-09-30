#include "main.h"
#include <unistd.h>
/**
 * main - driver function
 * @argc: count of arguments
 * @argv: pointer to arguments
 * Return: returns 0
 * if error returns 1 
 */
int main(int argc, char *argv[])
{
	args(argc, argv);
	return (0);
}
/**
 * args - prints all arguments
 * @s: size/count
 * @p:pointer to arguments list
 */
void args(int s, char *p[])
{
	int i = 0, j = 0;

	while (i < s)
	{
		while (p[i][j])
		{
			_putchar(p[i][j]);
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
/**
 * _putchar - prints character to terminal
 * @c: character
 * Return: returns 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
