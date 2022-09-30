#include "main.h"
#include <unistd.h>

/**
 * main -call a function that 
 *  prints the name of this program
 * @argc: size of arguments
 * @argv: vector containing arguments pased to the program
 * Return: returns 0
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

/**                                                                                                   
 *  *_putchar - writes the character c to stdout
 *  @c: The character to print
 *  Return: success 1.
 *  On error, -1 is returned, and errno is set appropriately.
 *  */
int _putchar(char c)
{
	return (write(1, &c, 1));
} 
