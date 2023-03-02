#include "main.h"
#include <string.h>

/**
 * *_strncat - Function
 * Description: Concatenate two strings
 * @dest: string 1
 * @src: string 2
 * @n: string 3
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
