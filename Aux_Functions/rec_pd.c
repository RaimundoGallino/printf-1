/**
 * rec_pd - function called by _printf to print mod character
 * @num: argument variable that is passed
 * @cont: counter
 * Return: void
 */
void rec_pd(int num, int *cont)
{
	if (num)
	{
		rec_pd(num / 10, cont);
		print_normal(num % 10 + '0');
		*cont += 1;
	}
}
