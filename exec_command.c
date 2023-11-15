#include "main.h"

/**
 * exec_command - attempts to execute a command specified by args[0]
 * @arguments: pointer to an array of strings
 * @env: pointer to an array of strings
 * Return: The function does not return any value
 */
void exec_command(char **arguments, char **env)
{
	char *comnd = comand_get(arguments[0]);

	if (comnd)
	{
		if (execve(comnd, arguments, env) == -1)
		{
			perror("error");
			free(comnd);
			exit(1);
		}
	}
	else
	{
		printf("not found\n");
		exit(1);
	}
}
