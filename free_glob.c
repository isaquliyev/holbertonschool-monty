#include "monty.h"

/**
 * free_glob - frees global variable
 */

void free_glob(void)
{
	stack_t *temp;

	while (glob.head)
	{
		temp = glob.head;
		glob.head = glob.head->next;
		free(temp);
	}
	free(glob.head);
	free(glob.buffer);
	fclose(glob.fd);
}
