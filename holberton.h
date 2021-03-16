#ifndef PRINTF
#define PRINTF

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>

/**
 * struct pr - struct that contains the format specifier and the corresponding
 * function to be called
 * @op: format specifier
 * @f: coresponding function
 * Return: void
 */
typedef struct pr
{
	char *op;
	int (*f)(va_list);

} pr_f;

int _printf(const char *format, ...);

int print_c(va_list list);

int print_s(va_list list);

int print_mod(va_list list);

int print_d(va_list list);

int print_rev(va_list list);

int print_rot(va_list list);

int print_normal(char ch);

int print_bin(va_list num);

int print_hex(va_list num);

int print_heX(va_list num);

void rec_pd(unsigned int num, int *cont);

int _strlen(char *str);

char *_strdup(char *str);

#endif
