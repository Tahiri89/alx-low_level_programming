#include "main.h"

/**
 * read_textfile - reads a textfile
 * @filename: file to read
 * @letters: amount of bytes to read
 * Return: printed letters count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, to_print, write_in_stdoutput;
	char *fl;

	if (filename == NULL || letters == 0)
		return (0);

	fl = malloc(sizeof(char) * letters);
	if (fl == NULL)
		return (0);

	fp = open(filename, O_RDWR);
	if (fp == -1)
	{
		free(fl);
		return (0);
	}
	to_print = read(fp, fl, letters);
	if (to_print == -1)
	{
		free(fl);
		close(fp);
		return (0);
	}

	write_in_stdoutput = write(STDOUT_FILENO, fl, to_print);
	if (write_in_stdoutput == -1)
		return (0);
	if (close(fp) == -1)
		return (0);
	free(fl);
	return (to_print);
}
