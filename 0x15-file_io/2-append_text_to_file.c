#include "main.h"
/**
 * append_text_to_file - append text to a file
 * @filename: name of the file to be append
 * @text_content: content of the file to be appended
 * Return: 1 success -1 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, count;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_RDWR | O_APPEND);
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
