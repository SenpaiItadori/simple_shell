#include "main.h"

/**
 * path_finder - handles the path of a command
 * @c: the command entered in by the uuser
 *
 * Return: the full path of the command
 */

char *path_finder(char *c)
{
	char *token, *path, *cmd;
	struct stat ab;
	int i;

	for (i = 0; c[i]; i++)
	{
		if (c[i] == '/')
		{
			if (stat(c, &ab) == 0)
				return (_strdup(c));
			return (NULL);
		}
	}

	path = _getenv("PATH");
	if (path == NULL)
		return (NULL);
	token = strtok(path, ":");

	while (token)
	{
		cmd = malloc(_strlen(token) + _strlen(c) + 2);
		if (cmd)
		{
			_strcpy(cmd, token);
			_concat(cmd, "/");
			_concat(cmd, c);
			if (stat(cmd, &ab) == 0)
			{
				free(path);
				return (cmd);
			}
		free(cmd);
		cmd = NULL;
		token = strtok(NULL, ":");
		}
	}
	free(path);
	return (NULL);
}
