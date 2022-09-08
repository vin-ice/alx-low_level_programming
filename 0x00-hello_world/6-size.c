#include <stdio.h>
/**
 * main - prints sizes of various data types in c
 *
 * Return: returns 0 to standard output
 */
int main(void)
{
long long ll;
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(ll));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
