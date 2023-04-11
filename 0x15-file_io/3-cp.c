#include "main.h"
/**
 * main - copy the content of a file to another file
 * @file_from: file to copy content from
 * @file_to: file to copy content to
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int op_f, op_t, op_t2, rd, wr, count = 0, cl_f, cl_t, cl_t2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	op_f = open(argv[1], O_RDONLY);
	op_t = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (argv[1] != NULL)
	{
		while (argv[1][count])
			count++;
	}
	cl_t = close(op_t);
	op_t2 = open(argv[2], O_RDWR | O_APPEND);
	buffer = malloc(count);
	rd = read(op_f, buffer, 1024);
	wr = write(op_t, buffer, rd);
	count -= rd;
	while (count > 0)
	{
		rd = read(op_f, buffer, 1024);
		wr = write(op_t, buffer, rd);
		count -= rd;
	}
	if (op_f == -1 || rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (op_t == -1 || op_t2 == -1 || wr == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	cl_f = close(op_f);
	if (cl_f == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", op_f);
		exit(100);
	}
	cl_t2 = close(op_t);
	if (cl_t == -1 || cl_t2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", op_t);
		exit(100);
	}
	return (0);
}
