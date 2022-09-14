#include <stdio.h>
/**
 * main - prints out first 98 fibonnaci numbers
 * Return: return 0
 */
int main(void)
{
	int counter;
	unsigned int i = 1, j = 1, k = i + j;

	printf("%u,%u\n", j, k);
	for (counter = 2; counter < 98; counter++)
	{
		printf(",");
		i = j;
		j = k;
		printf("%u", k);
	}
	return (0);
}
