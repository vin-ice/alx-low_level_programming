#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: array to be evaluated
 * n: number o characters to print out
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
