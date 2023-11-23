#include "lists.h"

/**
 * printMain - A constructor function.
 * it is executed before the main function.
 *
 * Return: void
 */


void printMain(void) __attribute__ ((constructor));

void printMain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
