#include "main.h"

int main(int argc, char **argv)
{
	int r, line_num = 0, i;
	size_t len = 0;
	FILE *fp;
	char *line = NULL, **command;

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
		for (i = 0; command[i]; i++)
		{
			printf("%s\n", command[i]);
			command[i];
		}
		free(command);
	}
	return (0);
}
