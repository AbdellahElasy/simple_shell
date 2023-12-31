#include "main.h"

/**
 * stri_length_strlen - calculates the length of the input string s.
 * @s: pointer to the input string
 *
 * Return: returns a size_t value representing the length of the string s.
 */
size_t stri_length_strlen(const char *s)
{
	const char *p = s;

	while (*p)
	{
		p++;
	}
	return ((size_t)(p - s));
}
