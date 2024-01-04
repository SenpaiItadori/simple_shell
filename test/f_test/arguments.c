#include "main.h"

/**
 * arg_sort - sorts the entire user  command input into an array for exercution
 * @buffer: the data from the user input into the stdin
 *
 * Return: an array containing all command arguments or NULL if failed
 */

char **arg_sort(char *buffer)
{
	int size = 0, i = 0;
	char **arr, *token, *copy, *buff_cpy;
	const char *delim = " \n\t";

	buff_cpy = _strdup(buffer);
	size = tok_num(buff_cpy, delim);
	printf("size of the array has been calculated\n");
	free(buff_cpy);
	copy = strdup(buffer);
	arr = create_array(size);
	printf("array has been created\n");

	token = strtok(copy, delim);
	arr[i] = malloc(sizeof(char) * (_strlen(token) + 1));
	if (arr[i] == NULL)
		return (NULL);
	printf("malloc for arr[0] is done\n");
	_strcpy(arr[i], token);
	printf("string has been copied\n");
	i++;

	while (token != NULL)
	{
		token = strtok(NULL, delim);
		if (token != NULL)
		{
			arr[i] = malloc(sizeof(char) * (_strlen(token) + 1));
			if (arr[i] == NULL)
				return (NULL);
			_strcpy(arr[i], token);
			i++;
		}
	}
	free(copy);
	arr[size] = NULL;
	printf("everything is fine with argsort\n");
	return (arr);
}
