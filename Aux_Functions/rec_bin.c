/**
 * rec_bin - function called by _printf to print mod character
 * @num: argument variable that is passed
 * @cont: counter
 * Return: void
 */
void rec_bin(unsigned int num, int *cont)
{
	if (num != 0)
	{
		rec_bin(num / 2, cont);
		print_normal(num % 2 + '0');
		*cont += 1;
	}

}
