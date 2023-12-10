#include "main.h"
/**
 * create_file - create a file filled with a text
 * @filename: const char *
 * @text_content: char*
 * Return: number of bytes or 0 if error
 */
ssize_t cp(const char *src, const char *dest)
{
	int fd, fd1;
	ssize_t b;
	char buf[1024];

	fd = open(src, O_RDONLY);

	if (fd == -1)
		dprintf(1, FILE_FROM_NOT_EXIST, src), exit(98);

	fd1 = open(src, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd1 == -1)
		dprintf(2, FILE_TO_ERROR, dest), exit(99);

	while ((b = read(fd, buf, 1024)) > 0)
		if (write(fd1, buf, b) != b)
			dprintf(2, FILE_TO_ERROR, dest), exit(99);

	if (b == -1)
		dprintf(2, FILE_FROM_NOT_EXIST, src), exit(98);

	fd = close(fd);
	fd1 = close(fd1);

	return (0);
}
/**
 * main - check the code
 * @ac: char
 * @av: size_t
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, ARGUMENT_NOT_CORRECT);
		exit(97);
	}
	cp(av[1], av[2]);
	return (0);
}
