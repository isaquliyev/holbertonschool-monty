#include "header.h"

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack)
		temp = *stack;
	while (*stack)
	{
		printf("%d\n", (*stack)->n);
		*stack = (*stack)->next;
	}
	*stack = temp;
}
