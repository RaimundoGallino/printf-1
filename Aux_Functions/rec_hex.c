/**
 * rec_hex - function called by _printf to print mod character
 * @num: argument variable that is passed
 * @cont: counter
 * Return: void
 */
void rec_hex(unsigned int num, int *cont, int flag)
{
	unsigned int temp;
	if (num != 0)
	{
		temp = num % 16;
		rec_hex(num / 16, cont, flag);
		if (temp < 10)
			print_normal(temp + '0');
		else
		{

			if (flag == 0)
				print_normal((temp - 10) + 'a');
			else
				print_normal((temp - 10) + 'A');
		}
		*cont += 1;
	}
}
