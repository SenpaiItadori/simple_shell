#include "main.h"

/**
 * main - runs a shell, a unix command line interpreter
 * @argc: the number of command line arguments
 * @argv: an array of command line arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	char *buff, **arr, *cmd;
	(void) argc;

	while (1)
	{
		prompt();
		buff = readline();
		if (buff == NULL)
		{
			if (isatty(STDIN_FILENO))
				_putchar('\n');
			return (0);
		}

		if (_exiit(_strdup(buff)) == 1)
		{
			free(buff);
			break;
		}
		arr = arg_sort(buff);
		cmd = path_finder(arr[0]);
		if (cmd)
		{
			run_command(cmd, arr);
			free_array(arr);
			free(buff);
		}
		else
		{
			perror(argv[0]);
			free_array(arr);
			free(buff);
		}
	}
	return (0);
}
