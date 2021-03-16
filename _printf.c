#include "holberton.h"
/**
* func - Entry Point
* @ap: Argument list
* @length: Length of the string printed
* @format: Format specifier
* @arr: Struct array containing format chars and corresponding functions
*
* Description: Auxiliary function for _printf
* Return: Nothing
*/

void func(va_list ap, int *length, const char *format, pr_f arr[])
{
	int i = 0, j;

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		if (format[i] == '%')
		{
			while (arr[j].op != NULL)
			{
				if (format[i + 1] == arr[j].op[0])
				{
					*length += arr[j].f(ap);
					break;
				}
				j++;
			}
			if (arr[j].op == NULL && format[i + 1] != ' ')
			{
				if (format [i + 1] != '\0')
				{
					print_normal(format[i]);
					print_normal(format[i + 1]);
					*length = *length + 2;
				}
				else
				{
					*length = -1;
					return;
				}
			}
			i += 1;
		}
		else
		{
			*length += print_normal(format[i]);
		}
		i++;
	}
}

/**
 * _printf - Entry Point
 * @format: String cointains the formato to the output
 *
 * Description: Prints to stdout using the given format and arguments
 * Return: Count the chars printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int length = 0;


	pr_f arr[] = {
		{"c", print_c}, {"s", print_s}, {"%", print_mod},
		{"d", print_d}, {"i", print_d}, {"r", print_rev},
		{"R", print_rot}, {"b", print_bin}, {"x", print_hex},
		{"X", print_heX}, {NULL, NULL}
	};
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	va_start(ap, format);
	func(ap, &length, format, arr);
	va_end(ap);
	return (length);
}
