#include <stdio.h>
#include <sys/syscall.h>
#include <unistd.h>
/**
 *main - print a sentence
 *Void
 *DescriptionDescription: This is a longer description.
 * Don't forget that a line should not exceed 80 characters.
 * But you're totally free to use several lines to properly
 * describe your function
 * Return: one
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	syscall(SYS_write, 1, msg, sizeof(msg));
	return (1);
}
