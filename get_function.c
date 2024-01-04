#include "monty.h"

/**
 * get_function - gets appropiate function for given opcodes
 *
 * @opcodes: opcode
 * Return: appropiate function
 */
void (*get_function(char *opcodes))(stack_t **stack, unsigned int line_number)
{
	instruction_t relations[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{NULL, NULL}
	};
	int i;

	for (i = 0; relations[i].opcode; i++)
	{
		if (!strcmp(relations[i].opcode, opcodes))
			break;
	}
	return (relations[i].f);
}
