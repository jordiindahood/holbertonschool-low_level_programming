#include "main.h"
/**
 * cap_string - check the code
 * Description: capitalize all words
 * @s: pointer to the string to be executed
 * Return: void
 */
char *cap_string(char *s)
{
	int i, cap, check = 0;

	if (*s != '\0')
	{
		if (s[0] <= 'z' && s[0] >= 'a')
			s[0] -= 32;
		while (*(s + i) != '\0')
		{
			if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '.')
				check++;
			if (cap == 0 && check == 1)
				if (*(s + i + 1) <= 'z' && *(s + i + 1) >= 'a'){
					cap++;
					check--;
				}
			if (*(s + i) <= 'z' && *(s + i) >= 'a' && cap == 1)
			{
				*(s + i) -= 32;
				cap--;
			}
			i++;
		}
	}
	return (s);
}
