#include "main.h"

/**
 * get_bit - Checks the bit's value at a designated position
 * @n: The value that relates to the bit at the indicated position
 * @index: The bit's location
 *
 * Return: The status of the bit at the indicated indeiiix
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
