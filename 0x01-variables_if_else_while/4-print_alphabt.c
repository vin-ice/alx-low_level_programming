#include <stdio.h>
/**
 * main - invokes the putchar lib function
 *
 * Return: returns 0 to stdout
 */
int main(void)
{
	char *alphabets = "abcdfghijklmoprstuvwxyz\n";

	do {
		putchar(*alphabets);
	} while (*(++alphabets));
	return (0);
}
