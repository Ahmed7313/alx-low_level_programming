#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(char *str);
void close_file(int fd);
void copy_content(const char *file_from, const char *file_to);
void check_file_access(int *from_fd, int *to_fd, const char *file_from, const char *file_to);
void do_copy(int from_fd, int to_fd);
int _putchar(char c);
void print_error(const char *message, const char *filename);
int main(int argc, char *argv[]);
#endif /* MAIN_H */
