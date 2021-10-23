#include "main.h"
/**
 * create_file - Creates a file and writes a string in it
 * @filename: Filename for the file
 * @text_content: Content to fill the file with
 * Return: 1 on success and -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, count, writer;

	if (filename == NULL)/** Filename Null Check **/
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);/*create file*/

	if (file == -1)/** File Creation Error Check **/
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (count = 0; text_content[count] != '\0'; count++)
			;
		writer = write(file, text_content, count);
		if (writer == -1)
			return (-1);
	}
	close(file);
	return (1);
}
