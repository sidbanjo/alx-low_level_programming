/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: substring to check occurence of any byt of
 *
 * Return: pointer to byte that matches first occurence, NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int c;

	for (i = 0; *(s + i); i++)
	{
		for (c = 0; *(accept + c); c++)
		{
			if (*(s + i) == *(accept + c))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
