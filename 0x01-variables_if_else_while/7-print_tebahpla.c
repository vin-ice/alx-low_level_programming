#include <stdio.h>
/**
 * main - calls putchar lib function
 *
 * Return: returns 0
 */
int main(void)
{
	char *alphabets = "abcdefghijklmnopqrstuvwxyz";
	int alpha;

	for (alpha = 25; alpha >= 0; alpha--)
		putchar(*(alphabets + alpha));
	putchar('\n');
	return (0);
}

