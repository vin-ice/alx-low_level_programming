#include "main.h"
#include <unistd.h>
/**
 * main - prints the number of arguments passed
 * @argc: number of parameters
 * @argv: vector containing all arguments
 * Return: returns 0
 */
int main(int argc, char __attribute__ ((unused))  *argv[])
{	
	nargs(argc);
	return (0);
}
/**
 * nargs - prints number of arguments passsed to function
 * @s: size/count
 */
void nargs(int s)
{
	_putchar('0' + (s - 1));
	_putchar('\n');
}
/**
 * _putchar -prints a charactrer
 * @c:character to be printed
 * Return: returns 1 on success
 * On eerror, 01 is returned 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
