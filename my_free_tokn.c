#include "main.h"

/**
 * my_free_tokn - Frees the memory allocated for the tokens array.
 * @tokens: Pointer to the tokens array to be freed.
 * Return: None.
 */
void my_free_tokn(char **tokens)
{
	char **token_ptr = tokens;

	while (*token_ptr)
	{
		free(*token_ptr);
		token_ptr++;
	}
	free(tokens);
}
