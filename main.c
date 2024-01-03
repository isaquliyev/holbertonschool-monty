#include "header.h"

int main(int argc, char **argv)
{
	unsigned int r, line_num = 0, i = 0;
	size_t len = 0;
	FILE *fp;
	char *line = NULL, **command, *temp;
	stack_t *stack = NULL;

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
		command = splitter(line, " \n\t$");
		if (command && command[0])
		{
			if (!strcmp(command[0], "push"))
				push(&stack, command, line_num);
		}
		while (command && command[i])
		{
			free(command[i]);
			printf("CHECKER %u --------------------\n", i);
			i++;
		}
		if (command)
			free(command);
		i = 0;
	}
	printf("CHECKER PALL ---------------\n");
	pall(&stack, 100);
	return (0);
}
