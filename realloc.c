#iclude "main.h"

/*
 * copy-mry: Copies 'k' bytes from the memory area to another .
 * @adress: Pointer to the destination memory area .
 * @srcpy: pointer to the source memory area .
 * @k: Number of byets to be copied .
 * return: A pointer to the destination memory area.
 */
void *copy_mry(void *adress, const void *srcpy, size_t k)
{
	char *a = adress;
	const char *s = srcpy;

	if(adress == NULL || srcpy == NULL)
	{
		return (NULL);
	}
	while (k--)
	{
		*a++ = *s++;
	}
	return (adress);

}

/*
 * realloc: resizes the memory block .
 * @potr: pointer to the memory block to be resized
 * @size_n1: old size of the memory block 
 * @size_n2: new size of the memory block
 *
 * Return: Pointer to the resized memory block
 */
void *realloc(void *potr, size_t size_n1, size_t size_n2)
{
	void *up_ptr;
	if(size_n2 == 0)
	{
		free(potr);
		return(NULL);
	}
	if(potr == NULL)
	{
		return(malloc(size_n2));
	}

	up_ptr = malloc(size_n2);
	if(up_ptr)
	{
		size_t copy_size = (size_n2 < size_n1) ? size_n2 : size_n1;
		memcpy(size_n2, potr, copy_size);
		free(potr);

	}
	return (up_ptr);

}
