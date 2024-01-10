#include "main.h"

/**
 * tok_num - caluculates the number of tokens from a string
 * @str: the string to be tokenised
 * @del: the delimeter to be used to find the tokens
 *
 * Return: the number of tokens possible
 */

int tok_num(char *str, const char *del)
{
	char *token;
	int num = 0;

	token = strtok(str, del);
	num++;
	while (token != NULL)
	{
		token = strtok(NULL, del);
		if (token != NULL)
			num++;
	}

	free(str);
	return (num);
}
