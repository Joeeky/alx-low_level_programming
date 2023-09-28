#include "main.h"

/**
 * binary_to_uint - unsigned int to be changed to a binary number
 * @b: The direction of the pointer 0 and 1 chars
 *
 * Return: Number to be converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b < '0' || *b > '1')
			return (0);
		num <<= 1;
		num += *b++ - '0';
	}

	return (num);
}
