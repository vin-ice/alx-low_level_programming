#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets ten times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char *alphabets = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
			_putchar(*(alphabets + j));

		_putchar('\n');
	}
}
