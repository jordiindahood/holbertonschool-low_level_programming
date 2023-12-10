#include "main.h"
/**
 * append_text_to_file - create a file filled with a text
 * @filename: const char *
 * @text_content: char*
 * Return: number of bytes or 0 if error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n;

	if (!text_content)
		n = 0;
	else
		n = strlen(text_content);

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	if (fd == -1)
		return (-1);
	write(fd, text_content, n);
	close(fd);
	return (1);
}
