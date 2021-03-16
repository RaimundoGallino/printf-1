#ifndef _AUX_FUN_
#define _AUX_FUN_
#include "8-rot13.c"
#include "rec_pd.c"
#include "rec_bin.c"
#include "rec_hex.c"
#include "_strlen.c"
#include "_strdup.c"
void rec_pd(unsigned int num, int *cont);
void rec_bin(unsigned int num, int *cont);
void rec_hex(unsigned int num, int *cont, int flag);
char *rot13(char *);
#endif
