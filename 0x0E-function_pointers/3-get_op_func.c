#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"


/**
 * get_op_func - selects the correct function
 * @s: parameter
 *
 * Return: the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].f != NULL)
	{
		if (*(ops[i].op) == *s && *s != '\0')
			return (ops[i].f);
		i++;
	}
	i = 0;
	printf("Error\n");
	exit(99);
}
