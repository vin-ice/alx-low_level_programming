#include <stdio.h>
/**
 * main - calls putchar lib function
 *
 * Return: returns 0
 */
int main(void)
{
	char *lowAlphabets = "abcdefghijklmnopqrstuvwxyz";
	char *upAlphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";

	do {
		putchar(*lowAlphabets);
	} while (*(++lowAlphabets));
	do {
		putchar(*upAlphabets);
	} while (*(++upAlphabets));
	return (0);
}
