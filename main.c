#include "main.h"

int main(int argc, char **argv)
{
	int r, line_num = 0, i;
	size_t len = 0;
	FILE *fp;
	char *line = NULL, **command;
	stack_t node = malloc(sizeof(stack_t));

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

	while ((r = getline(&line, &len, fp)) != -1)
	{
		command = splitter(line, " \n\t");
		if (!strcmp(command[0], "push"))
		{
			if (atoi(command[1]) != 0 || atoi(command[1]) == command[1])
			{
				node.n = atoi(command[1]);
			}
			else
				printf("L%d: usage: push integer", line_num);
		}
		else
			printf("L%d: unknown instruction %s", line_num, command[0]);
		line_num++;
		for (i = 0; command[i]; i++)
			free(command[i]);
		free(command);
	}
	return (0);
}
