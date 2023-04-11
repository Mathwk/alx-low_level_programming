#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: content of the file to be created
 * Return: 1 success -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, count;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (op == -1)
		return (-1);
	count = 0;
	if (text_content != NULL)
	{
		while (text_content[count])
			count++;
	}
	wr = write(op, text_content, count);
	if (wr == -1)
		return (-1);
	close(op);
	return (1);
}
