#include "monty.h"

/**
 * _isnumber - checks string can be converted
 * to number or not
 *
 * @str: given string
 *
 * Return: 1 if it is convertable, otherwise 0
 */

int _isnumber(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == '-' && i == 0)
			continue;
		if (isdigit(str[i]) == 0)
			return (0);
	}
	return (1);
}
