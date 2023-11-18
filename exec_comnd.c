#include "main.h"

/**
 * exec_comnd - attempts to execute a command specified by args[0]
 * @args: pointer to an array of strings
 * @env: pointer to an array of strings
 * Return: The function does not return any value
 */
void exec_comnd(char **args, char **env)
{
	char *comnd = _get_comand(args[0]);

	if (comnd)
	{
		if (execve(comnd, args, env) == -1)
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
