#include "header.h"

void push(stack_t **stack, char **line_tokens, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (atoi(line_tokens[1]) != 0 || !strcmp(line_tokens[1], "0"))
	{
		new_node->n = atoi(line_tokens[1]);
		new_node->next = *stack;
		new_node->prev = NULL;
		if (*stack)
			(*stack)->prev = new_node;
		*stack = new_node;
	}
	else
	{
		printf("Unknown Instruction: %u\n", line_number);
	}
}
