#ifndef PRINTF
#define PRINTF

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>

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

void rec_pd(int num, int *cont);

#endif
