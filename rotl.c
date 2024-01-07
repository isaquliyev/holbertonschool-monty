#include "monty.h"

/**
 * rotl - The top element of the stack becomes the last one
 * and the second top element of the stack becomes the first one.
 *
 * @stack: top of stack
 * @line_number: line number for error message
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *last = *stack;
	stack_t *head = (*stack)->next;

	while (last->next)
		last = last->next;
	last->next = *stack;
	(*stack)->prev = last;
	(*stack)->next = NULL;
	*stack = head;
}
