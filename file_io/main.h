#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - appends text at end of file
 * @filename: name of the file
 * @text_content: NULL-terminated string to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content);

/**
 * _copy - copies contents of one file into another
 * @src: source filename
 * @dest: destination filename
 *
 * Return: 0 on success or relevant error code
 */
int _copy(const char *src, const char *dest);

void print_error(char *msg);
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abiversion(unsigned char *e_ident);
void print_type(unsigned char *buffer);
void print_entry(unsigned char *entry, int class, int data);

#endif /* MAIN_H */

