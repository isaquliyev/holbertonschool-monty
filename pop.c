#include "monty.h"

/**
 * pop - removes the top element of stack
 *
 * @stack: top element of stack
 * @line_number: line number of opcode
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (!stack || !*stack)
	{
		free_glob();
		dprintf(2, "L%u: can't pop empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = (*stack)->next;
	if (*stack)
		(*stack)->prev = NULL;
	free(temp);
}
