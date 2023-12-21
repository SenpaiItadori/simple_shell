#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>

extern char **environ;

/*_______________string functions_________________*/
int _strlen(char *str);
char *_strdup(char *str);
char *_strcpy(char *s1, char *s2);
char *_concat(char *s1, char *s2);
int _strcmp(char *s1, char *s2);

/*_______________array functions__________________*/
char **create_array(int size);
char **init_array(char **arr, int size);
void free_array(char **array);

/*_______________main functions___________________*/
void prompt(void);
char *readline(void);
char **arg_sort(char *buffer);

/*______________argument.c functions_______________*/
int tok_num(char *str, const char *del);


int _putchar(char c);

#endif
