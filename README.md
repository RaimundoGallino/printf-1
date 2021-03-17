<h1 align="center"> _printf! </h1>
<p align="center">
  <img width="250" height="250" src="https://cdn.iconscout.com/icon/free/png-512/c-programming-569564.png">
</p>

This Repository contains all the functions needed to make **_printf()** work.  This function is capable of handling multiple kind of input if we specify it correctly. 

<h1 align="center"> Files </h1> 

**_printf.c**  - contains the _printf() function and the code structure.

**functions.c** - contains the basic functions called by the printf
>print_normal - print the input character by character<br>
>print_c - prints the character given ,  as an ASCII value (char)<br>
>print_s - print the input specified as a string (char*)<br>
>print_d - print the input as an integer<br>
>print_mod - prints a % character<br>

**Adv_functions.c** - contains specific functions for advanced  format specifiers
>print_rev - prints the string given in reverse<br>
>print_rot - print the string given in ROT13<br>
>print_bin - prints the integer in binary<br>
>prints_hex - prints the integer given in hexadecimal lowercase<br>
>prints_heX - prints the integer given in hexadecimal in UPPERCASE<br>

**Aux_functions/** - contains auxiliary functions that are called in the previous described functions 
- **8-rot13.c** - Encode the string into rot 13
- **_strdup.c** - copies a string to a new memory location
- **_strlen.c** -  returns the length of the string
- **rec_pd.c** - recursive function called by the print_d function  
- **rec_bin.c** - recursive function called by the print_b function
- **rec_hex.c** - recursive function called by the print_hex and print_heX functions. This two functions switch by a flag operator passed to the rec_hex function
- **aux_fun.h** - header file containing the prototypes of the actual directory

**holberton.h** - header file containing all the prototype functions described previously, the standard libraries  used and the typedef struct created for _printf.c.

**man_3_printf** - manpage for the usage of _printf.

<h1 align="center"> Parameters</h1> 

```` c
int _printf( const char * format, ... );
````

The **Format** specifier "%"  should be added before the character parameters the argument passed to the function.


 Format Specifier | Output | Example
------------ | ------------- |-----------
 c | Character | A
 s | String of characters | Holberton
 i and d | Signed decimal integer | 98 
 % | A % followed by another % character will write a single % to the stream| %
 b | Unsigned binary | 10101
 x | Unsigned hexadecimal integer (lowercase) | 36264eb
 X | Unsigned hexadecimal integer (uppercase) | 36264EB
 r | Reversed string | notrebloH |
 R | Rot13 string | cevags
 
##### Return Value.
On **success**, the **total number** of characters written is returned.
If an error occurs, a negative number is returned.

<h2> How to use </h2>

**Compilation**
All the *.c files need to be compiled along with the main.c you are using. The compiler used to compile and check all the files was `gcc 4.8.4`  on Ubuntu 14.04 LTS with the flags  `-Wall Werror`  `-Westra`  and  `-pedantic.`

Run this command on your terminal to compile the files

   `gcc -Wall -Werror -Wextra -pedantic *.c`

<h3> Example </h3> 
In function `main.c` testing the use of _printf() function

	#include "holberton.h" 
	/** 
	 * main - main function of program 
	 * Return: always 0 
	 */ 
	int main(void)
	{ 
		char *str;
		  
		str = "Holberton" 
		_printf("%s\n", str);
		return (0);
	}

## Contributors

 - [Diego Varela](https://github.com/dieg0varela)
 - [Raimundo Gallino](https://github.com/RaimundoGallino)
