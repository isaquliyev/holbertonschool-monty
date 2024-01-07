#include "monty.h"

/**
 * rotr - The last element of the stack becomes the
 * top element of the stack.
 *
 * @stack: top of stack
 * @line_number: line number for error message
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *last = *stack;
	(void)line_number;

	if (!*stack || !(*stack)->next)
		return;
	while (last->next)
		last = last->next;
	last->next = *stack;
	last->prev->next = NULL;
	last->prev = NULL;
	(*stack)->prev = last;
	*stack = last;
}
