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

	if (stat(c, &ab) == 0)
		return (c);

	path = _getenv("PATH");
	token = strtok(path, ":");
	cmd = malloc(_strlen(c) + _strlen(token) + 2);
	if (cmd == NULL)
	{
		free(path);
		return (NULL);
	}
	cmd = _strcpy(cmd, token);
	cmd = _concat(cmd, "/");
	cmd = _concat(cmd, c);
	while (token != NULL)
	{
		if (stat(cmd, &ab) == 0)
		{
			free(path);
			free(c);
			return (cmd);
		}
		free(cmd);
		cmd = NULL;
		token = strtok(NULL, ":");
		cmd = malloc(_strlen(c) + _strlen(token) + 2);
		if (cmd == NULL)
		{
			free(path);
			return (NULL);
		}
		cmd = _strcpy(cmd, token);
		cmd = _concat(cmd, "/");
		cmd = _concat(cmd, c);
	}
	free(path);
	free(cmd);
	return (c);
}
