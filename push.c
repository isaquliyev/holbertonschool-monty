#include "header.h"

/**
 * push - push number to stack
 *
 * @stack: top element of stack
 *
 * @line_tokens: tokenized line into two dimensional array
 *
 * @line_number: line number of .m file
 */

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
		printf("L%u: usage: push integer\n", line_number);
	}
}
