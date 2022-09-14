#include <stdio.h>
/**
 * main - prints out first 50 fibonnaci numbers
 * Return: returns 0
 */
int main(void)
{
	int counter;
	unsingned i = 0, j = 1, k;

	for (counter = 1; counter <= 50; counter++)
	{
		k = i +  j;
		printf("%u", k);
		i = j;
		j = k;
		if (counter == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
