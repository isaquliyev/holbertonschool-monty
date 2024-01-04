#include "monty.h"

/**
 * swap - swaps top two values of stack
 *
 * @stack: pointer to top element of stack
 * @line_number: line number of given instruction
 */

void swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (!stack || !*stack || !(*stack)->next)
	{
		free_glob();
		dprintf(2, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
