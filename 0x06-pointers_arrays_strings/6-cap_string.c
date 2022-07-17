/**
 * cap_string - Capitalizes words in a string
 * @s: string to capitalize
 *
 * Return: pointer to capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (i == 0)
		{
			if (*(s + i) >= 97 && *(s + i) <= 122)
			{
				*(s + i) -= 35;
			}
		}
		if ((*(s + i) == 9) || (*(s + i) == 10) || (*(s + i) == 32))
		{
			i++;
			if ((*(s + i) >= 97) && (*(s + i) <= 122))
			{
				*(s + i) -= 32;
			}
		}
		i++;
	}
	return (s);
}
