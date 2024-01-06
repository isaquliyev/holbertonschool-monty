#include "monty.h"

/**
 * _div - Divides the second top element of the stack by
 * the top element of the stack.
 *
 * @stack: Pointer to pointer to top element of stack.
 * @line_number: Line number of opcode.
 */

void _div(stack_t **stack, unsigned int line_number)
{
	int num;
	stack_t *temp;

	if (!stack || !*stack || !(*stack)->next)
	{
		free_glob();
		dprintf(2, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		free_glob();
		dprintf(2, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	num = (*stack)->next->n / temp->n;
	(*stack)->next->n = num;
	*stack = (*stack)->next;
	free(temp);
}
