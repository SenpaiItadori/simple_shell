#include "main.h"

/**
 * _getenv - gets the environment variable from the key given
 * @str: the key
 *
 * Return: the value of the key or NULL if failed
 */

char *_getenv(char *str)
{
	char *token, *temp;
	size_t i = 0;

	while (environ[i])
	{
		temp = _strdup(environ[i]);
		token = strtok(temp, "=");
		if (_strcmp(token, str) == 0)
		{
			token = strtok(NULL, "=");
			return (token);
		}
		free(temp);
		i++;
	}

	return (NULL);
}
