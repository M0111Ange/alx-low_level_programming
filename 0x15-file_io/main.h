#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


/*******************elf project*******************/
void _checkelf(unsigned char *e_ident);
void _printmagic(unsigned char *e_ident);
void _printclass(unsigned char *e_ident);
void _printdata(unsigned char *e_ident);
void _printversion(unsigned char *e_ident);
void _printabi(unsigned char *e_ident);
void _printosabi(unsigned char *e_ident);
void _printtype(unsigned int e_type, unsigned char *e_ident);
void _printentry(unsigned long int e_entry, unsigned char *e_ident);
void _closeelf(int elf);

#endif
