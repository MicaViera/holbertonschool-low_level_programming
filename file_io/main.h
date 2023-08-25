#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - Function that prints to the POSIX standard output.
 * @filename: The file.
 * @letters: the length and content.
 * Return: the actual number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
#endif
