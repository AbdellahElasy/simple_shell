#include "main.h"

/**
 * _stri_copy_strcpy - Copy a string from the source to the buffer
 * @address: destination buffer pointer
 * @src: source string pointer
 *
 * Return: Pointer to the beginning of the destination buffer
 */
char *_stri_copy_strcpy(char *address, const char *src)
{
	char *p = address;

	while ((*p++ = *src++))
	{
	}
	return (address);
}
