#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - selects correct function to perform
 * @s: operator
 * @a: operand 1
 * @b: operand 2
 *
 * Return: returns a pointer to function corresponding
 * 	to operators given
 */
int (*get_op_func(char *s))(int, int)
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

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[1].op) == 0)
			break;
		i++;
	}
	return (ops[1].f);
}
