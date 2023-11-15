#include "main.h"

/**
 * main - program simple shell takes user input .
 * @ac: the number of command arguments (unused) .
 * @av: comaand-line argument strings array .
 * @env: An array of enviroment varibles .
 * Return: the last command executed returns .
 */
int main(int ac, char **av, char **env)
{
	char *buf = NULL;
	size_t buf_size = 0;
	char **argumes = NULL;
	pid_t pid;
	int status = 0;
	int c_chara;
	int intr = 1;

	(void)ac;
	(void)av;

	if (!isatty(STDIN_FILENO))
		intr = 0;


	while (1)
	{
		if (intr)
			write(1, "$ ", 2);
		c_chara = getline(&buf, &buf_size, stdin);
		if (c_chara == -1)
		{
			if (intr)
				write(1, "\n", 1);
			break;
		}
		argumes = string_split(buf, "\t\n");
		if (!argumes || argumes[0] == NULL)
		{
			free(buf);
			if (argumes)
			{
				free_token(argumes);
			}
			exit(EXIT_SUCCESS);
		}
		if (compare_string(argumes[0], "exit") == 0)
		{
			free_token(argumes);
			break;
		}
		pid = fork();
		if (pid == 0)
		{
			exec_command(argumes, env);
			perror("Error");
			exit(EXIT_FAILURE);
					}
					else if (pid < 0)
					{
					perror("Error");

					}
					else
					{
					wait(&status);
					if (WIFEXITED(status))
					{
					status = WEXITSTATUS(status);
					}
					free_token(argumes);
					}
					}
					free(buf);
					return (status);

					}
