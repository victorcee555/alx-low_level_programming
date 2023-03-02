#include "main.h"
#include <string.h>

/**
 * _strncpy - Function
 * Description: copy string
 * @dest: string 1
 * @src: string 2
 * @n: string 3
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
