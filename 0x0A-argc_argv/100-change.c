#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - driver function
 * @argc - arguments count
 * @argv - arguments vector
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	char *err = "Error\n";

	if (argc != 2)
	{
		while (*err)
		{
			_putchar(*err);
			err++;
		}
		_putchar('\n');
		return (1);	
	}
	change(argv[1]);
	return (0);
}
/**
 * _putchar - prints  characters
 * * @c:  character
 * Return: returns 1 or 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * change - prints least number of coins to
 * make change
 * @amnt: string containing amnount
 */
void change(char *amount)
{	
	int count = 0;

	int amnt = atoi(amount);
	while (amnt > 0)
	{
		if (amnt % 25 == 0)
		{
			count++;
			amnt -= 25;	
			continue;
		}
		if (amnt % 10 == 0)
		{
			count++;
			amnt -= 10;
			continue;
		}
		if (amnt % 5 == 0)
		{
			count++;
			amnt -= 5;
			continue;
		}
		if (amnt % 2 == 0)
		{
			count++;
			amnt -= 2;
			continue;
		}
		if (amnt % 1 == 0)
		{
			count++;
			amnt -= 1;
			continue;
		}
	}
	printf("%d\n", count);
}
