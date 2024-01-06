#include "monty.h"

/**
 * pstr - Prints the string starting at the top of the stack.
 * followed by a new line. (like this comment)
 *
 * @stack: top of stack
 * @line_number: line number for error message
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->n || !isascii((*stack)->n))
	{
		putchar('\n');
		free_glob();
		exit(EXIT_SUCCESS);
	}
	putchar((*stack)->n);
	pstr(&(*stack)->next, line_number);
}
