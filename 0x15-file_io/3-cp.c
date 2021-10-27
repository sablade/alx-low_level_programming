#include "main.h"
#define SE STDERR_FILENO
#define SIZE 1024
/**
 * main - creates a program to copy the contents of one file tp another
 * @argc: Argument count
 * @argv: Array of argument values
 * Return: Returns 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, f_write, f_close;
	ssize_t f_read;
	char buf[SIZE];

	if (argc != 3)/** Check argument count while running script **/
	{
		dprintf(SE, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);/** Open file_from to read **/
	if (file_from == -1)/** Check for file opening/reading errors **/
	{
		dprintf(SE, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)/** Check for file writing errors **/
	{
		dprintf(SE, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (f_read > 0)
	{
		f_read = read(file_from, buf, SIZE);
		if (f_read == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		f_write = write(file_from, buf, SIZE);
		if (f_write == 1)
		{
			dprintf(SE, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	f_close = close(file_from);/** Close File Read From **/
	if (f_close == -1)
	{
		dprintf(SE, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	f_close = close(file_to);/** Close File Written To **/
	if (f_close == -1)
	{
		dprintf(SE, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
