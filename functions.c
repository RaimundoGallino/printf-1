#include "holberton.h"

/**
 * print_c - function called by _printf to print characters
 * @list: argument variable that is passed
 * Return: void
 */
int print_c(va_list list)
{
	char *c = va_arg(list, char *);

	write(1, &c, 1);
	va_end(list);
	return (1);
}

/**
 * print_s - function called by _printf to print string
 * @list: argument variable that is passed
 * Return: void
 */
int print_s(va_list list)
{
	char *str = va_arg(list, char *);
	int len = strlen(str);

	write(1, str, len);
	va_end(list);
	return (len);
}

/**
 * print_mod - function called by _printf to print mod character
 * @list: argument variable that is passed
 * Return: void
 */
int print_mod(va_list list)
{
	char c = '%';

	write(1, &c, 1);
	va_end(list);
	return (1);
}
/**
 * rec_pd - function called by _printf to print mod character
 * @num: argument variable that is passed
 * @cont: counter
 * Return: void
 */
void rec_pd(int num, int *cont)
{
	if (num != 0)
	{
		rec_pd(num / 10, cont);
		print_normal(num % 10 + '0');
		*cont += 1;
	}
}

/**
 * print_d - function called by _printf to print digits
 * @list: argument variable that is passed
 * Return: void
 */
int print_d(va_list list)
{
	int in = va_arg(list, int);
	int cont_nums = 0;

	rec_pd(in, &cont_nums);
	va_end(list);
	return (cont_nums);
}

/**
 * print_normal - prints a string.
 * @ch: characters passed one by one.
 * Return: Count of chars printed
 **/
int print_normal(char ch)
{
	write(1, &ch, 1);
	return (1);
}
/**
* print_rev - Entry point
* @list: list of arguments
*
* Description: Print the string in reverse from a va_list
* Return: Count of chars printed
*/
int print_rev(va_list list)
{
	char *str = va_arg(list, char*);
	int i = 0, len = strlen(str);

	for (i = len - 1 ; i >= 0 ; i--)
		write(1, &str[i], 1);
	va_end(list);
	return (len);
}
/**
* print_rot - Entry point
* @list: List of arguments
*
* Description: Print the string in rot13 from a va_list
* Return: Count of chars printed
*/
int print_rot(va_list list)
{
	char *str = va_arg(list, char*);
	int len = strlen(str);
	char *rot1 = strdup(str);
	char *rot2 = rot13(rot1);

	write(1, rot2, len);
	free(rot1);
	va_end(list);
	return (len);
}
