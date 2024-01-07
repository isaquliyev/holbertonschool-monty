#include "monty.h"

/**
 * queue - makes global variable type "queue".
 *
 * @stack: top of stack
 * @line_number: line number for error message
 */

void queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	strcpy(glob.type, "queue");
}
