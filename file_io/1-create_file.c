#include "main.h"
/**
 * read_textfile - read a file and print its contents
 * @filename: const char *
 * @letters: size_t
 * Return: number of bytes or 0 if error
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n;

	if (!text_content)
		n = 0;
	else
		n = strlen(text_content);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
