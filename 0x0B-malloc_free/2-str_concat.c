#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: A pointer to s1.
 */

char *str_concat(char *s1, char *s2)
{
	size_t len;
	char *s;

	strcpy(s, s1);

	if (s2 == NULL)
		return (NULL);

	len = strlen(s2) + strlen(s1) + 1;

	s1 = malloc(sizeof(char) * len);

	if (s1 == NULL)
		return (NULL);

	strcat(s, s2);

	return (s1);
}
