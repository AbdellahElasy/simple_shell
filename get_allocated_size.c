#include "main.h"

/**
 * get_allocated_size - Returns the size of the memory block allocated for ptr.
 * @ptr: Pointer to the memory block.
 *
 * Return: The size of the memory block allocated for ptr.
 */
size_t get_allocated_size(void *potr)
{
	const size_t memo_size = sizeof(size_t);
	size_t *memo_ptr = (size_t *)potr - 1;

	if (potr == NULL)
	{
		return (0);
	}
	return (*memo_ptr - memo_size);
}
