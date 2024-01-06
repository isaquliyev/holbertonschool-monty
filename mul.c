#include "monty.h"

/**
 * _mul - Multiplies the second top element of the
 * stack with the top element of the stack.
 *
 * @stack: Pointer to pointer to top element of stack.
 * @line_number: Line number of opcode.
 */

void _mul(stack_t **stack, unsigned int line_number)
{
	int num;
	stack_t *temp;

	if (!stack || !*stack || !(*stack)->next)
	{
		free_glob();
		dprintf(2, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = (*stack)->next->n * (*stack)->n;
	(*stack)->next->n = num;
	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
}
