#include "monty.h"

/**
 * pop - removes the top element of stack
 *
 * @stack: top element of stack
 * @line_number: line number of opcode
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!stack || !*stack)
	{
		dprintf(2, "L%u: can't pop empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	if (temp)
		temp->prev = NULL;
	free(*stack);
	*stack = temp;
}
