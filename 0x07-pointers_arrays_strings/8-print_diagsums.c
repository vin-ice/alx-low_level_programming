#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagnols of
 * a square matrix
 * @a: array numbers
 * @size: size of square
 */
void print_diagsums(int *a, int size)
{
	int sum_l_to_r = 0, sum_r_to_l = 0;
	int i = 0;
	
	while (*a)
	{
		sum_l_to_r += (*a)[i];
		sum_r_to_l + = (*a)[size - i];
		i++;	
		a++;
	}
	printf("%d, %d", sum_l_to_r, sum_r_to_r);
}
