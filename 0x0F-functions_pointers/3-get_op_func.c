#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects correct function to perform
 * @s: operator
 * @a: operand 1
 * @b: operand 2
 * Return: returns a pointer to function corresponding
 * 	to operators given
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops [] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i])
	{
		if (ops[i]->op == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		if (ops[i]->op == *s && ops[i]->op != NULL)
			break;
		i++;
	}
	return ((ops[1]->f)(a, b));
}
