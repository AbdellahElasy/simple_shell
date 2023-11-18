#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdbool.h>


/* Functions declaration */

void *_my_realc(void *ptr, size_t old_size, size_t new_size);
void *_my_cpy_mem(void *adress, const void *srcpy, size_t n);
size_t my_size_malloc(void *ptr);
char *_stri_copy_strcpy(char *address, const char *src);
int stri_compare_strcmp(const char *s1, const char *s2);
size_t stri_length_strlen(const char *s);
char *_stri_concat_strcat(char *address, const char *src);
char *_my_get_environ(const char *env_var);
char *_get_comand(char *command);
char **split_stri(char *buf, const char *del);
void exec_comnd(char **args, char **env);
void my_free_tokn(char **tokens);

#endif
