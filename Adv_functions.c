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
