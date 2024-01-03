#include "monty.h"

global_t glob;

/**
 * start_global - set initial values for global variable glob
 *
 * @fd: file descriptor
 */
void start_global(FILE *fd)
{
	glob.line_number = 1;
	glob.num = NULL;
	glob.head = NULL;
	glob.fd = fd;
	glob.buffer = NULL;
}

/**
 * main - main function of project
 *
 * @argc: number of arguments
 *
 * @argv: command line arguments
 *
 * Return: always 0.
 */

int main(int argc, char **argv)
{
	unsigned int line_num = 1, i = 0;
	size_t len = 0;
	FILE *fp;
	char *line = NULL, **command;
	stack_t *stack = NULL, *temp;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (!fp)
	{
		printf("Error: Can't open file %s\n", argv[1]);
	}
	while (getline(&line, &len, fp) != -1)
	{
		command = splitter(line, " \n\t\r$");
		if (command && command[0])
		{
			if (!strcmp(command[0], "push"))
				push(&stack, command, line_num);
			if (!strcmp(command[0], "pall"))
				pall(&stack, line_num);
		}
		while (command && command[i])
		{
			free(command[i]);
			i++;
		}
		if (command)
			free(command);
		i = 0;
	}
	free(line);
	fclose(fp);
	if (stack)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
	free(stack);
	return (0);
}
