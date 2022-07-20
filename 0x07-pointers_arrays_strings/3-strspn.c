/**
 * _strspn - gets length of a prefix substring
 * @s: string
 * @accept: prefix substring
 *
 * Return: length of prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int c;
	unsigned int count = 0;
	int check;

	for (i = 0; *(s + i); i++)
	{
		check = 0;
		for (c = 0; *(accept + c); c++)
		{
			if (*(s + i) == *(accept + c))
				check = 1;
		}
		if (check == 1)
			count += 1;
		else
			break;
	}
	return (count);
}
