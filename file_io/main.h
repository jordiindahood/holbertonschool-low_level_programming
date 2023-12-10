#ifndef FILE_IO
#define FILE_IO

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define ARGUMENT_NOT_CORRECT "Usage: cp file_from file_to\n"
#define FILE_FROM_NOT_EXIST "Error: Can't read from file %s\n"
#define FILE_TO_ERROR "Error: Can't write to %s\n"
#define DESCRIPTOR_NOT_CLOSE "Error: Can't close fd %d\n"

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
ssize_t cp_textfile(const char *file_from, const char *file_to);


#endif
