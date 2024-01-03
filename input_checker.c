#include "monty.h"

/**
 * input_checker - checks the inputs valid or not
 *
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: file descriptor
 */

FILE *input_checker(int argc, char **argv)
{
	FILE *fd;

	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (!fd)
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	return (fd);
}
