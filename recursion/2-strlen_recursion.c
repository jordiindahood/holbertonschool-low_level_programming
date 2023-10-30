#include "main.h"
/**
 * _strlen_recursion - check the code
 * Description: count the length of a string
 * @s : pointer to string
 * Return: Void
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
