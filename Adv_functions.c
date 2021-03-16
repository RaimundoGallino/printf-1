#include "holberton.h"
#include "Aux_Functions/aux_fun.h"
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
	int i = 0, len = _strlen(str);

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
	int len;
	char *rot1;
	char *rot2;
	
	if (!str)
		return (-1);
	len = _strlen(str);
	rot1 = _strdup(str);
	rot2 = rot13(rot1);	
	write(1, rot2, len);
	free(rot1);
	va_end(list);
	return (len);
}

/**
 * print_bin - Entry point
 * @num: List of arguments
 *
 * Description: Print the unsigned ints in binary from a va_list
 * Return: Count of chars printed
 */
int print_bin(va_list num)
{
        int in = va_arg(num, unsigned int);
        int cont_nums = 0;

        rec_bin(in, &cont_nums);
        va_end(num);
        return (cont_nums);
}
