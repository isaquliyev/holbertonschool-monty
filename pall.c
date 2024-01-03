#include "monty.h"

/**
 * pall - print all values in the stack
 *
 * @stack: the top element of stack
 *
 * @line_number: line number of .m file
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	if (*stack)
		temp = *stack;
	while (*stack)
	{
		printf("%d\n", (*stack)->n);
		*stack = (*stack)->next;
	}
	*stack = temp;
}
