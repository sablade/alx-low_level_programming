#include "main.h"
/**
 * append_text_to_file - Appends Text To The End Of A File
 * @filename: Name of file to append text to
 * @text_content: Text to append to file
 * Return: Returns 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, count, writer;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	for (count = 0; text_content[count]; count++)
		;
	writer = write(file, text_content, count);
	if (writer == -1)
		return (-1);

	close(file);
	return (1);
}
