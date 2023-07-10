#include "main.h"

/**
 * append_text_to_file - adds text to the enf of a file
 * @filename: name of file
 * @text_content: content of text to add
 * Return: int value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int add;
	long int lenght = 0;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_RDWR | O_APPEND);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[lenght])
			lenght++;
		add = write(fp, text_content, lenght);
		if (add == -1)
			return (-1);
	}
	if (close(fp) == -1)
		return (-1);
	return (1);
}
