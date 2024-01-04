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

	if (!stack || !(*stack))
	{
		fprintf(stderr,	"L%u: can't pop an empty stack\n", line_number);
		free_glob();
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
	if (*stack)
		(*stack)->prev = NULL;
}
