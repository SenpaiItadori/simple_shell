#include "shell.h"

int main(void)
{
	size_t i;
	char *buff = malloc(sizeof(i)), *cmd, *token, **arr, *yes;
	int j = 1, k;
	const char *delim = " \n";
	pid_t a;

	i = sizeof(buff);
	printf("Hell_yeah: ");
	while (getline(&buff, &i, stdin) != EOF)
	{
		cmd = malloc(sizeof(buff));
		strcpy(cmd, buff);
		token = strtok(cmd, delim);
		arr = malloc((sizeof(char *) * i) + 5);
		arr[0] = token;

		while (token != NULL)
		{
			token = strtok(NULL, delim);
			arr[j] = token;
			j++;
		}
		arr[j] = NULL;
		if (strcmp(arr[0], "exit") == 0)
		{
			printf("\n\n-----disconnected-----\nShell terminated");
			exit(0);
		}
		yes = malloc(sizeof(arr));
		copy(yes, arr[0]);
		a = fork();

		if (a != 0)
		{
			wait(NULL);
			printf("Hell_yeah: ");
		}
		else
		{
			if (arr[0] == NULL)
			{
				exit(0);
			}
			k = execve(yes, arr, NULL);
			if (k == -1)
			{
				perror("ERROR");
				exit(-1);
			}
		}

	}

	free(yes);
	free(cmd);
	free(buff);
	free(arr);
	return (0);
}
