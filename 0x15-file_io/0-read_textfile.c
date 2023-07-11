#include "main.h"

/**
 * read_textfile - reads text file and prints it
 *                 to standard output.
 *
 * @filename: the name of fie to read.
 * @letters: number of letters to read and print.
 *
 * Return: number of letters it could read or 0 if fail.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t check, count;
	char *buffer;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	check = read(fp, buffer, letters);
	if (check == -1)
		return (0);
	count = write(STDOUT_FILENO, buffer, check);
	if (count == -1 || check != count)
		return (0);

	free(buffer);
	close(fp);

	return (count);
}
