/**
 * swap_int - swaps the values of two variables
 * @a : Pointer to the first varaible
 * @b: Pointer to the second variable
 */
void swap_int(int *a, int *b)
{
	int  c = *a;

	*a = *b;
	*b = c;
}
