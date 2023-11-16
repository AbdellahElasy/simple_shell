#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <sys/wait.h>
#include <stdlib.h>

/* declaration of functuons */
void *_realloc(void *potr, size_t size_n1, size_t size_n2);
void *_copy_mry(void *adress, const void *srcpy, size_t k);
size_t get_allocated_size(void *potr);
char *copy_string(char *address, const char *src);
int compare_string(const char *s1, const char *s2);
size_t get_string_length(const char *s);
char *concat_stri_stract(char *address, const char *src);
char *_get_environ(const char *en_var);
char *get_command(char *command);
char **string_split(char *buf, const char *deel);
void exec_command(char **args, char **env);
void free_token(char **tokens);

#endif
