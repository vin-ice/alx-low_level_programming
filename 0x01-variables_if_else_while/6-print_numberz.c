#include <stdio.h>
/**
 * main - calls the putchar lib function
 *
 * Return: returns 0
 */
int main(void)
{
	int counter = 0;

	do {
	putchar(counter + '0');
	} while (counter++ < 9);
	putchar('\n');
return (0);
}
