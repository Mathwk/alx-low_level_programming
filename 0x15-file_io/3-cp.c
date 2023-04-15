#include "main.h"
void err97(void);
void err98(char *fl);
void err99(char *fl);
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
		err97();
	if (buffer == NULL)
		err99(argv[2]);
	op_f = open(argv[1], O_RDONLY);
	op_t = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	rd = read(op_f, buffer, 1024);
	while (rd > 0)
	{
		if (op_f == -1 || rd == -1)
			err98(argv[1]);
		wr = write(op_t, buffer, rd);
		if (op_t == -1 || wr == -1)
			err99(argv[2]);
		rd = read(op_f, buffer, 1024);
		op_t = open(argv[2], O_RDWR | O_APPEND);
	}
	cl_file(op_f);
	cl_file(op_t);
	return (0);
}
/**
 * err97 - error code 97
 * @fl: file name
 */
void err97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * err98 - error code 98
 * @fl: file name
 */
void err98(char *fl)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fl);
	exit(98);
}
/**
 * err99 - error code 99
 * @fl: file name
 */
void err99(char *fl)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fl);
	exit(99);
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
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl);
		exit(100);
	}
}
