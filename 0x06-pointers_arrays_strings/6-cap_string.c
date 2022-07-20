/**
 * cap_string - Capitalizes words in a string
 * @s: string to capitalize
 *
 * Return: pointer to capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;
	int c;
	char sep[] = "\n \t,;.!\"(){}";

	while (*(s + i))
	{
		if (i == 0)
		{
			if (*(s + i) >= 'a' && *(s + i) <= 'z')
				*(s + i) -= 32;
		}
		for (c = 0; *(sep + c); c++)
		{
		if (*(sep + c) == *(s + i))
		{
			i++;
			if ((*(s + i) >= 'a') && (*(s + i) <= 'z'))
				*(s + i) -= 32;
			else if ((*(s + i) >= 'A') && (*(s + i) <= 'Z'))
				continue;
			else
			{
				i++;
				if ((*(s + i) >= 'a') && (*(s + i) <= 'z'))
					*(s + i) -= 32;
			}
		}
		}
		i++;
	}
	return (s);
}
