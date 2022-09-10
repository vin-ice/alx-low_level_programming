#include <stdio.h>
/**
 * main- invokes the putchar lib function
 *
 * Retrun: retruns 0 to stdout
 */
int main(void)
{
	char *decimals = "0123456789\n";

	do {
		putchar(*decimals);
	} while (*(++decimals));
	return (0);
}

