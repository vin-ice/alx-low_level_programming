#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - addition operator
 * @a: operand 1
 * @b: operand 2
 * Return: returns sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction operator
 * @a: operand 1
 * @b: operand 2
 * Return: returns difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication operator
 * @a: operand 1
 * @b: operand 2
 * Return: returns product
 */
int op_mul(int a, int b)
{
	return (a * b); 
}
/**
 * op_div - divition operator
 * @a: operand 1
 * @b: operand 2
 * Return: returns dividend
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);	
	}
	return (a / b);
}
/**
 * op_mod - modulo operator
 * @a: operand 1
 * @b: operand 2
 * Return: returns reminder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
