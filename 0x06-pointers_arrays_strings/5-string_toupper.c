/**
 * string_toupper - converts string to upper case
 * @s: string to convert
 *
 * Return: pointer to uppercase string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) > 90)
			*(s + i) = *(s + i) - 32;
		i++;
	}
	return (s);
}
