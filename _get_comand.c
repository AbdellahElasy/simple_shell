#include "main.h"

/**
 * _get_comand - searches for a specified command
 * @command: pointer to the command to be searched for
 *
 * Return: returns a pointer to a string representing the full path
 */
char *_get_comand(char *command)
{
	char *path, *strike, *comnd_all;
	struct stat strst;

	if (command[0] == '/')
	{
		if (stat(command, &strst) == 0)
		{
			return (command);
		}
	}

	path = _my_get_environ("PATH");
	strike = strtok(path, ":");

	while (strike)
	{
		size_t len_token = stri_length_strlen(strike);
		size_t len_cmd = stri_length_strlen(command);

		comnd_all = (char *)malloc(len_token + len_cmd + 2);

		if (!comnd_all)
		{
			perror("Memory allocation error");
			exit(1);
		}
		_stri_copy_strcpy(comnd_all, strike);
		_stri_concat_strcat(comnd_all, "/");
		_stri_concat_strcat(comnd_all, command);
		if (stat(comnd_all, &strst) == 0)
		{
			return (comnd_all);
		}
		free(comnd_all);
		strike = strtok(NULL, ":");
	}
	return (NULL);
}
