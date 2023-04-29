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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	
	len = strlen(s2) + strlen(s1) + 1;

	s = malloc(sizeof(char) * len);

	if (s == NULL)
		return (NULL);

	s = strcat(s, s1);
	s = strcat(s, s2);

	return (s);
}
