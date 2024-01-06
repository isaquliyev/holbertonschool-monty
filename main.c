#include "monty.h"

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
	void (*f)(stack_t **stack, unsigned int line_number);
	FILE *fd;
	size_t size = 0, r;
	char *tokens[2] = {NULL, NULL};

	fd = input_checker(argc, argv);
	start_global(fd);
	while ((r = getline(&glob.buffer, &size, fd) != -1))
	{
		tokens[0] = strtok(glob.buffer, " \t\n$");
		if (tokens[0] && tokens[0][0] != '#')
		{
			f = get_function(tokens[0]);
			if (!f)
			{
				dprintf(2, "L%u: ", glob.line_number);
				dprintf(2, "unknown instruction %s\n", tokens[0]);
				free_glob();
				exit(EXIT_FAILURE);
			}
			glob.num = strtok(NULL, " \t\n$");
			f(&glob.head, glob.line_number);
		}
		glob.line_number++;
	}
	free_glob();
	return (0);
}
