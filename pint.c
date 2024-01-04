#include "monty.h"

/**
 * pint - prints top of the stack
 *
 * @stack: top of stack
 * @line_number: line number for error message
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		dprintf(2, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
