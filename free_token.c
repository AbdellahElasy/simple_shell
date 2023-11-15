#include "main.h"

/**
 * free_token - Frees the memory allocated for the tokens array.
 * @tokens: Pointer to the tokens array to be freed.
 * Return: None.
 */
void free_token(char **tokens)
{
	char **token_ptr = tokens;

	while (*token_ptr)
	{
		free(*token_ptr);
		token_ptr++;
	}
	free(tokens);
}
