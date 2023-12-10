#include "main.h"
/**
 * cp_textfile - check the code
 * @file_from: char
 * @file_to: size_t
 * Return: Always 0.
 */
ssize_t cp_textfile(const char *file_from, const char *file_to)
{
	int fd, fd1;
	ssize_t b;
	char buf[1024];

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
		dprintf(1, FILE_FROM_NOT_EXIST, file_from), exit(98);
	fd1 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd1 == -1)
		dprintf(2, FILE_TO_ERROR, file_to), exit(99);
	while ((b = read(fd, buf, 1024)) > 0)
		if (write(fd1, buf, b) != b)
			dprintf(2, FILE_TO_ERROR, file_to), exit(99);
	if (b == -1)
		dprintf(2, FILE_FROM_NOT_EXIST, file_from), exit(98);
	fd = close(fd);
	fd1 = close(fd1);
	if (fd == -1)
		dprintf(2, DESCRIPTOR_NOT_CLOSE, fd), exit(100);
	if (fd1 == -1)
		dprintf(2, DESCRIPTOR_NOT_CLOSE, fd1), exit(100);
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
