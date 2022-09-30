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
	whats_my_name(argv[0]);	
	return (0);
}
/**
 * whats_my_name - prints name of program
 * @str: first parameter
 */ 
void whats_my_name(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
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
