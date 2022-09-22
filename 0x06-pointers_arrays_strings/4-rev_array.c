/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int mid = (n % 2 == 0) ? n / 2 : (n + 1) / 2;
	int i, j;

	for (i = 0; i < mid; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
