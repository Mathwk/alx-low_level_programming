#include "main.h"
void cl_file(int fl);
/**
 * main - copy the content of a file to another file
 * @argc: file to copy content from
 * @argv: file to copy content to
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int op_f, op_t, rd, wr;
	char *buffer = malloc(1024);

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (buffer == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	op_f = open(argv[1], O_RDONLY);
	op_t = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	rd = read(op_f, buffer, 1024);
	while (rd > 0)
	{
		if (op_f == -1 || rd == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wr = write(op_t, buffer, rd);
		rd = read(op_f, buffer, 1024);
		op_t = open(argv[2], O_RDWR | O_APPEND);
		if (op_t == -1 || wr == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
	}
	cl_file(op_f);
	cl_file(op_t);
	return (0);
}
/**
 * cl_file - closes the file
 * @fl: file from or to
 * Return: nothing
 */
void cl_file(int fl)
{
	int cl;

	cl = close(fl);
	if (cl == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fl);
		exit(100);
	}
}
