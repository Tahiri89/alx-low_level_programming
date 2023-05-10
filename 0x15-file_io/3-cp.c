#include "main.h"
#include "holberton.h"
/**
 * main - program to copy content form file to new file created
 * @argc: argument count
 * @argv: array of arguments
 * Return: a value
 */
int main(int argc, char *argv[])
{
	int fp, cp, to_read, to_write;
	char *ptr;

	if (argc != 3)
	{
		dprint(STDERR_FILENO, " Usage: cp file_from file_to\n");
		exit(97);
	}
	cp = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (cp == -1)
	{
		dprint("Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fp = open(argv[1], O_RDONLY);
	if (fp == -1)
	{
		dprint(STDERR_FILENO, " Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while ((to_read = read(cp, ptr, 1024)) > 0)
	{
		to_write = write(cp, ptr, to_read);
		if (to_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (to_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(cp) == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: can't close %d\n", argv[2]);
		exit(100);
	}
	if (close(fp) == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: can't close %d\n", argv[1]);
		exit(100);
	}
	return (0);
}
