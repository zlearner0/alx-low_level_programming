#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

#define arrsize 1024

int _putchar(char letter);
int _strlen(char *str);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);





#endif
