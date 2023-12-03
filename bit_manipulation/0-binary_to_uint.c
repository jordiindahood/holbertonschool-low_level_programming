#include "main.h"
/**
 * binary_to_unit - convert from binary to decimal
 * @b: const char *, pionting only to 1 or 0
 * Return: unsigned int of converted number, 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	char *index;
	int num, x, rest = 0, size = 1, result = 0;

	if (!b)
		return (0);
	*index = *b;
	while (index != '\0')
	{
		if (*index != '0' && *index != '1')
			return (0);
		index++;
	}
	num = atoi(b *);
	while (num != 0)
	{
		x = num % 10;
		result += x * size;
		num /= 10;
		size *= 2;
	}
	return (result)
}