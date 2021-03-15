/**
 * _strlen - displays the number of characters of a string
 *
 * @s: pointer to the string.
 * Return: length of the string
 */

int _strlen(char *s)
{
	int str = 0;

	if (s == '\0')
		return (0);

	while (s[str] != '\0')
	{
		str++;
	}
	return (str);
}
