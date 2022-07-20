/**
 * leet - encodes string into 1337
 * @s: string to encode
 *
 * Return: pointer to string
 */
char *leet(char *s)
{
	char dict_w[] = "AaEeOoTtLl";
	char dict_n[] = "4433007711";
	int l;
	int c = 0;

	while (*(s + c) != '\0')
	{
		for (l = 0; *(dict_w + l) != '\0'; l++)
		{
			if (*(dict_w + l) == *(s + c))
			{
				*(s + c) = *(dict_n + l);
			}
		}
		c++;
	}
	return (s);
}
