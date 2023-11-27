#ifndef HEADER_H
#define HEADER_H

/* for file open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* for dprintf */
#include <stdio.h>

/* for malloc and free */
#include <stdlib.h>

/* for file close */
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif

