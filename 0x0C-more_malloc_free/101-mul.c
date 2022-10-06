#include "main.h"
#include <stdlib.h>
/**
 * is_digit - checks whether string has int
 * @c: char
 *
 * Return: returns 1 else 0
 */
int is_digit(char *c)
{
	while (*c)
	{
		if (*c < '0' || *c > '9')
			return (0);
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: count of arguments
 * @argv: vector of pointers to argumnents
 * 
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	char err[] = "Error\n", *a;
	int l1, l2, size, t1, i;

	if (argc != 3 || !is_digit(*argv[1] || !is_digit(*argv[2])))
	{
		for (t1 = 0; err[t1]; t1++)
			_putchar(err[t1]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2i++)
		;
	size = l1 + l2 + 1;
	a = malloc(sizeof a * ln);
	if (a == NULL)
	{
		for (t1 = 0; err[t1]; t1++)
			_putchar(err[t1]);
		exit (98);
	}
}
