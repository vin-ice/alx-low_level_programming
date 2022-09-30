#include "main.h"
#include <stdio.h>
/**
 * main -call a function that 
 *  prints the name of this program
 * @argc: size of arguments
 * @argv: vector containing arguments pased to the program
 * Return: returns 0
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
