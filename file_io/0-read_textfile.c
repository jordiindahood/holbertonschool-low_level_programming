#include "main.h"
/**
 * read_textfile - read a file and print its contents
 * @filename: const char *
 * @letters: size_t
 * Return: number of bytes or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes;
	char buffer[1024 * 69];

	if (!filename || !letters)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	bytes = read(file, buffer, letters);
	bytes = write(STDOUT_FILENO, buffer, bytes);
	close(file);

	return (bytes);
}
