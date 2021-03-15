/**
 * _strdup - copies a string to a new memory location
 * @str: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	char *str2;
	unsigned int i, n;

	if (str == NULL)
		return (NULL);

	n = _strlen(str) + 1;

	str2 = malloc(sizeof(char) * n);

	if (str2 == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		str2[i] = str[i];

	return (str2);
}
