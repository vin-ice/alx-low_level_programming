#include <stdio.h>
/**
 * main - prints numbers 1-100
 * if number is a multiple of 3, print fizz
 * if number is a multiple of 5, print buzz
 * if number is a multiple of 3 and 5 print fizzbuzz
 * Return:returns 0
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if ((number % 3 == 0) && (number % 5 != 0))
			printf("Fizz");
		else if ((number % 5 == 0) && (number % 3 != 0))
			printf("Buzz");
		else if ((number % 3 == 0) && (number % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%d", number);
		if (number < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
