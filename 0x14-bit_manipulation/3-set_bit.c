#include "main.h"

/**
 * set_bit - Changes the state of the bit at a specified index.
 * @n: where n points to the integer whose bit is
 * to be modified.
 * @index: The offset of the bit to be changed.
 *
 * Return: In case of success, returns 1; otherwise, -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || (index >= (sizeof(unsigned long int) * 8)))
		return (-1);

	*n |= 1UL << index;
	return (1);
}
