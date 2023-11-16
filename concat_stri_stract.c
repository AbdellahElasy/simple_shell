#include "main.h"

/**
 * concat_stri_stract - appends the source string src to string dest.
 * @address: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: returns a pointer of the modified string dest
 */
char *concat_stri_stract(char *address, const char *src)
{
	char *p = address + get_string_length(address);

	while ((*p++ = *src++))
	{
	}
	return (address);
}
