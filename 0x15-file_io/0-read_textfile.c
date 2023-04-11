#include "main.h"
/**
 * read_textfile - reads text from files and displays on the std output
 * @filename: file to read from
 * @letters: count of letters to print in the std output
 * Return: number of letters or 0 if failed or can't open
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wr;
	char *buffer;

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	buffer = malloc(letters);
	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		return (0);
	}
	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
	{
		free(buffer);
		return (0);
	}
	close(op);
	return (wr);
}
