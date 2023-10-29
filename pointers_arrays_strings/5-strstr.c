#include "main.h"
/**
 * _strstr - check the code
 * Description: locate the substring
 * @haystack : the string to be searched in
 * @needle : the substring to search for
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, n = 0;

	while (needle[n] != '\0')
		n++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != n)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
