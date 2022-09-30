#include "main.h"
#include <unistd.h>
#include <stdio.h>

int _atoi(char *s);
/**
 * main - prints product of two arguments
 * @argc: argument count
 * @argv: pointer to arguments list
 * Return: returns 1 if arguments are missing
 */
int main (int argc, char *argv[])
{
	char *err = "Error\0";

	if (argc < 3)
	{
		while (*err)
		{
			_putchar(*err);
			err++;
		}
		_putchar('\n');
		return (1);
	}
	mul(argv);
	_putchar('\n');
	return (0);
}
/**
 * mul - multiplies arguments
 * @p: pointer to arguments
 */
void mul(char *p[])
{
	int prod = (_atoi(p[1]) * _atoi(p[2]));
	
	printf("%d", prod);
}
/**
 * _putchar - prints a character
 * @c:character
 * Return: returns 1 if successful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _atoi - converts string to integer
 * @s: string
 * Return: returns integer
 */
int _atoi(char *s)
{
	int i = 0, neg = 1;

	while (*s)
	{
		if ('-')
		{
			neg *= -1;
			continue;
		}
		i = i * 10 + *s - '0';
		s++;
	}
	if (neg)
		i = i * -1;
	return (i);
}
