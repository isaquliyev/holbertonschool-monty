#include "monty.h"

/**
 * push - push number to stack
 *
 * @stack: top element of stack
 *
 * @line_number: line number of .m file
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	int n;

	if (!glob.num || !_isnumber(glob.num))
	{
		dprintf(2, "L%u: ", line_number);
		dprintf(2, "usage: push integer\n");
		free_glob();
		exit(EXIT_FAILURE);
	}
	n = atoi(glob.num);
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = *stack;
	new_node->prev = NULL;
	if ((*stack))
		(*stack)->prev = new_node;
	*stack = new_node;
}
