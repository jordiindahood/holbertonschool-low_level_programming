#include "main.h"
/**
 * read_textfile - read a file and print its contents
 * @filename: const char *
 * @letters: size_t
 * Return: number of bytes or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr;
	size_t count = 0;
	char ch;

	if (filename == NULL || letters < 1 )
		return (0);
	ptr = fopen(filename, "r");
	if (ptr == NULL)
		return (0);

	do {
		ch = fgetc(ptr);
		_putchar(ch);
		printf("<--->{%d}||",ch);
		count++;
	} while (ch != EOF && count < letters);
	fclose(ptr);

	return (count);
}
