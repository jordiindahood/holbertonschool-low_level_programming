#include "main.h"
#include <stdio.h>
/**
 * read_textfile - read a file and print its contents
 * @filename: const char *
 * @letters: size_t
 * Return: number of bytes or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr;
	int count = 0;
	char ch;

	if (filename)
		ptr = fopen(filename, "r");

	while (ptr && ch != EOF && count < (int)letters)
	{
		ch = fgetc(ptr);
		_putchar(ch);
		count++;
	}
	fclose(ptr);

	return (count);
}
