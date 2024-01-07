#include "monty.h"

/**
 * stack - makes global variable type "stack".
 *
 * @stack: top of stack
 * @line_number: line number for error message
 */

void _stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	strcpy(glob.type, "stack");
}
