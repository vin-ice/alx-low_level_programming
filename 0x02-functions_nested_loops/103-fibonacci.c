#include <stdio.h>
/**
 * main - prints sum of even fibonacci numbers
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned int i = 0, j = 1, k = 0, sum = 0;

	while (k <= 4000000)
	{
		k = i + j;
		i = j;
		j = k;
		if ((i % 2) == 0)
			sum += i;
	}
	printf("%u\n", sum);
	return (0);
}
