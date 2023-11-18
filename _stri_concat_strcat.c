#include "main.h"

/**
 * _stri_concat_strcat - appends the source string src to string dest.
 * @address: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: returns a pointer of the modified string dest
 */
char *_stri_concat_strcat(char *address, const char *src)
{
	char *p = address + stri_length_strlen(address);

	while ((*p++ = *src++))
	{
	}
	return (address);
}
