#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 * Desc: A Header file contains all prototype functions
 */

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif /* MAIN_H */
