#include "main.h"
/**
 * main - copy the content of a file to another file
 * @argc: file to copy content from
 * @argv: file to copy content to
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int op_f, op_t, rd, wr, cl_f, cl_t;
	char *buffer = malloc(1024);

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	op_f = open(argv[1], O_RDONLY);
	op_t = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	rd = read(op_f, buffer, 1024);
	while (rd > 0)
	{
		if (op_f == -1 || rd == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(op_t, buffer, rd);
		rd = read(op_f, buffer, 1024);
		op_t = open(argv[2], O_RDWR | O_APPEND);
		if (op_t == -1 || wr == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	cl_f = close(op_f);
	if (cl_f == -1)
	{
		dprintf(2, "Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}
	cl_t = close(op_t);
	if (cl_t == -1)
	{
		dprintf(2, "Error: Can't close fd %s\n", argv[2]);
		exit(100);
	}
	return (0);
}
