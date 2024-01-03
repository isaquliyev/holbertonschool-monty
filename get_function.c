#include "monty.h"

void (*get_function(char *opcodes))(stack_t **stack, unsigned int line_number)
{
	instruction_t relations[] = {
		{"push", push},
		{"pall", pall},
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
