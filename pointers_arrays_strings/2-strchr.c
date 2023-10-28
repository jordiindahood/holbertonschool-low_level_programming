#include "main.h"
/**
 * _strchr - check the code
 * Description: locate a character in a string
 * @s : string to be executed
 * @c : charachter to search for
 * Return: char*
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i]!='\0'){
		if (s[i]==c)
			break;
		i++;
	}
	return (s);
}
