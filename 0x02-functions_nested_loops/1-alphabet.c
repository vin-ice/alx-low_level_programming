#include "main.h"
/**
 * print_alphabet - prints the alphabets
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char *alphabets = "abcdefghijklmnopqrstuvwxyz";

	do {
		_putchar(*alphabets);
	} while (*(++alphabets));

	_putchar('\n');
}
