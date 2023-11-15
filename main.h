#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <sys/wait.h>

/* declaration of functuons */
void *realloc(void *potr, size_t size_n1, size_t size_n2);
void *copy_mry(void *adress, const void *srcpy, size_t k);
size_t get_allocated_size(void *potr);
char *copy_string(char *destination, const char *source);
int compare_string(const char *ad, const char *ab);
size_t get_string_length(const char *s);
char *concat_stri_stract(char *address, const char *src);
char *_environ_get(const char *en_var);
char *get_command(char *command);
char **string_split(char *buf, const char *deel);
void comand_exec(char **arguments, char **env);
void free_token(char **tokens);

#endif
