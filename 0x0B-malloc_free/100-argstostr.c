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
	int len, i;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i <= ac)
	{
		len += strlen(av[i]);
		len++;
	}

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	strcpy(str, av[1]);
	for (i = 2; i <= ac; i++)
	{
		strcat(str, "\n");
		strcat(str, av[i]);
	}

	return (str);
}
