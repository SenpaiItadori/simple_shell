#include "main.h"

int main(void)
{
	char *str, **a, *cmd;
	int j = 0;

	prompt();
	str = readline();
	printf("string has been read\n");

	a = arg_sort(str);
	printf("array has been made\n");
	cmd = path_finder(a[0]);
	printf("path has been handled\n");

	printf("it worked , the path is %s\n", cmd);
	free(str);
	printf("readline has been freed\n");
	run_command(cmd, a);
	while (a[j])
	{
		free(a[j]);
		j++;
		printf("Freeing an array in this\n");
	}
	free(a);
	printf("final free of A\n");
	printf("print free cmd\n");

	return (0);
}
