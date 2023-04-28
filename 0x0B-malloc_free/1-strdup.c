#include "main.h"
#include <stio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - duplicates a string.
 * @str: string to duplicate.
 *
 * Return: a pounter to the new string.
 */

char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
		return (NULL);

	i = strlen(str);

	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);
	strcpy(str, s);

	return (s);
	free(s);
}
