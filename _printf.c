#include "holberton.h"
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
	int i = 0, j;

	pr_f arr[] = {
		{"c", print_c}, {"s", print_s}, {"%", print_mod}, {"d", print_d},
		{"i", print_d}, {"r", print_rev}, {"R", print_rot}, {NULL, NULL}
	};
	if (!format)
		return (-1);
	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		if (format[i] == '%')
		{
			i += 1;
			while (arr[j].op != NULL)
			{
				if (format[i] == arr[j].op[0])
				{
					length += arr[j].f(ap);
					break;
				}
				j++;
			}
			if (arr[j].op == NULL)
			{
				length += print_normal(format[i - 1]);
				length += print_normal(format[i]);
			}
		}
		else
		{
			length += print_normal(format[i]);
		}
		i++;
	}
	va_end(ap);
	return (length);
}
