#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - concatenates all argument in a program.
 * @ac: number of arguments.
 * @av: an array of pointers to the string containing the arguments.
 *
 * Return: a pointer to the new string.
 */

char *argstostr(int ac, char **av)
{
	int total_len, i, index, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_len = 0;

	for (i = 0; i <= ac; i++)
	{
		total_len += strlen(av[i]);
		total_len++;
	}

	str = malloc(sizeof(char) * total_len + 1);
	if (str == NULL)
		return (NULL);

	index = 0;
	len = 0;

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		memcpy(str + index, av[i], len);
		index += len;
		str[index++] = '\n';
	}

	str[index] = '\n';
	return (str);
}
