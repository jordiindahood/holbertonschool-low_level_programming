#include "main.h"
#include <stdio.h>
/**
 * _isupper - check the code
 * Description: check if @c is an UPPERCASE letter
 * @c: char
 * Return: 1 if c is an uppercase letter, 0 if not
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

	if (!filename)
		fclose(ptr);

	return (count);
}
