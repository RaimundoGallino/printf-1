<h1 align="center"> _printf! </h1>


<p align="center">
  <img width="250" height="250" src="https://logodix.com/logo/640491.png">
</p>

This Repository contains all the functions needed to make **_printf()** work.  This function is capable of handling multiple kind of input if we specify it correctly. 

<h1 align="center"> Files </h1> 

**_printf.c**  - contains the _printf() function and the code structure.

**functions.c** - contains the basic functions called by the printf
>print_normal - print the input character by character
>print_c - prints the character given ,  as an ASCII value (char)
>print_s - print the input specified as a string (char*)
>print_d - print the input as an integer
>print_mod - prints a % character

**Advfunctions.c** - contains specific functions for advanced  format specifiers
>print_rev - prints the string given in reverse
>print_rot - print the string given in ROT13
>print_bin - prints the integer in binary
>prints_hex - prints the integer given in hexadecimal lowercase
>prints_heX - prints the integer given in hexadecimal in UPPERCASE

**Aux_functions/** - contains auxiliary functions that are called in the previous described functions 

**8-rot13.c** - Encode the string into rot 13
**_strdup.c** - copies a string to a new memory location
**_strlen.c** -  returns the length of the string
**rec_bin.c**
