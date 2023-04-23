#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds postive arguments
 * @argc: number of argument
 * @argv: array of pointer to the strings containing the arguments
 *
 * Return: (0) on success, 1 otherwise.
 */


int main(int argc, char **argv)
{
    int i, sum = 0;

    if (argc > 1)
    {
        for (i = 1; i < argc; i++)
        {
            char *ptr = argv[i];

            while (*ptr != '\0')
            {
                if (!isdigit(*ptr))
                {
                    printf("Error\n");
                    return 1;
                }
                ptr++;
            }

            sum += atoi(argv[i]);
        }

        printf("%d\n", sum);
    }
    else
    {
        printf("%d\n", 0);
    }

    return 0;
}

