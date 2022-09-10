#include <stdio.h>
/**
 * main - invokes putchar lib function
 *
 * Return: returns 0
 */
int main(void)
{
	int dec;

	for (dec = 0; dec < 10; dec++)
	{
		putchar(dec + '0');
		if (dec < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
