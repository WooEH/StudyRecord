#include "my_struct.h"
#ifndef MY_HEADER_H
#define MY_HEADER_H

typedef struct tel  TEL;

void insert(TEL **tel_list, int *count, int max, char *temp);
void print_all(TEL **tel_list, int *count, int max);
void delete_tel(TEL **tel_list, int *count, int max);
void find_by_birth(TEL **tel_list, int *count, int max);
void reg_from_file(TEL **tel_list, int *count, int max);
void exit_program(TEL **tel_list,int *count, int max);
void draw(void);

#endif
