#include "lists.h"

/**
 * printMain - A constructor function.
 * it is executed before the main function.
 *
 * Return: void
 */


void printMain(void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
