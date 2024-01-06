#include "monty.h"

/**
 * pchar - Prints top of the stack value as char.
 *
 * @stack: top of stack
 * @line_number: line number for error message
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		free_glob();
		dprintf(2, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n >= 0 && (*stack)->n < 128)
		puts((char *)&(*stack)->n);
	else
	{
		free_glob();
		dprintf(2, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
}
