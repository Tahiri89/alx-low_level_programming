#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename to create
 * @text_content: content to add to the file created
 * Return: int value
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	long int writed_text;
	int lenght = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_RDWR, 0600);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[lenght])
			lenght++;
		writed_text = write(fp, text_content, lenght);
		if (writed_text == -1)
			return (-1);
	}
	if (close(fp) == -1)
		return (-1);
	return (1);
}
