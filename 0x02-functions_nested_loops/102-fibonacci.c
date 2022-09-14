#include <stdio.h>
/**
 * main - prints out first 50 fibonnaci numbers
 * Return: returns 0
 */
int main(void)
{
	int counter;
	unsigned long i = 0, j = 1, k;

	for (counter = 1; counter <= 50; counter++)
	{
		k = i +  j;
		printf("%lu", k);
		i = j;
		j = k;
		if (counter == 50)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
