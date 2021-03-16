/**
* rot13 - Entry point
* @s: String
*
* Description: Encode the string into rot 13
* Return: String
*/
char *rot13(char *s)
{
	char orig[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char renp[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j = 0;
	
	while (s[i] != '\0')
	{
		for (j = 0 ; j <= 52 ; j++)
		{
			if (s[i] == orig[j])
			{
				s[i] = renp[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
