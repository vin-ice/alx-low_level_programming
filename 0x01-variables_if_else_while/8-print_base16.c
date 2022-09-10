#include <stdio.h>
/**
 * main - invokes putchar lib function
 *
 * Return: returns 0
 */
int main(void)
{
	char *hexadecimals = "0123456789abcdef\n";

	do {
		putchar(*(hexadecimals));
	} while (*(++hexadecimals));
	return (0);
}
