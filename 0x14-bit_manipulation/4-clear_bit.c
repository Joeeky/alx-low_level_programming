#include "main.h"

/**
 * clear_bit - Zeroes out a bit at the specified index.
 * @n: A pointer to the bit.
 * @index: The count for value manipulation - indexing starts at 0
 *
 * Return: If an error occurs - -1.
 * Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
