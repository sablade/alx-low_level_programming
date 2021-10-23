#include "main.h"
/**
 * read_textfile - Reads from a text file and prints it to standard output
 * @filename: The name of the file to be read
 * @letters: number of letters to print
 * Return: Returns the number of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rdltrs, wrtltrs;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);/**open file**/
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);/**create space for buf read*/
	if (buf == NULL)/** Buffer Null Check **/
	{
		free(buf);
		return (0);
	}

	rdltrs = read(fd, buf, letters);/** read the text in the file**/
	if (rdltrs == -1)/** Read Failure Check **/
		return (0);

	wrtltrs = write(STDOUT_FILENO, buf, rdltrs);/**write to stdout**/
	if (wrtltrs == -1 || rdltrs != wrtltrs)/** Write Failure Check **/
		return (0);

	free(buf);
	close(fd);
	return (wrtltrs);
}
