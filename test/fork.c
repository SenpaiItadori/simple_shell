#include "main.h"

/**
 * run_command - runs the command entered in by the user
 * @str: the command
 * @cmd_args: an array with the rest of arguments
 *
 * Return: num
 */

int run_command(char *str, char **cmd_args)
{
	pid_t p;


	p = fork();
	if (p < 0)
	{
		perror("Error");
	}
	else if (p == 0)
	{
		if (execve(str, cmd_args, environ) == -1)
		{
			perror(cmd_args[0]);
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
	printf("hello\n");

	return (0);
}
