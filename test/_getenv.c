#include "main.h"

/**
 * _getenv - gets the environment variable from the key given
 * @str: the key
 *
 * Return: the value of the key or NULL if failed
 */

char *_getenv(char *str)
{
	char *token, *temp, *val, *env;
	size_t i;

	for (i = 0; environ[i]; i++)
	{
		temp = _strdup(environ[i]);
		token = strtok(temp, "=");
		if (_strcmp(token, str) == 0)
		{
			val = strtok(NULL, "\n");
			env = _strdup(val);
			free(temp);
			return (env);
		}
		free(temp);
		temp = NULL;
	}

	return (NULL);
}
