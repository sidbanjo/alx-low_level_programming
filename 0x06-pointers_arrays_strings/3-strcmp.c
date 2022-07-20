/**
 * _strcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: signed int of difference
 */
int _strcmp(char *s1, char *s2)
{
	signed int a;
	signed int b;
	signed int diff;
	int i;

	if (s1 == s2)
	{
		return (0);
	}
	else
	{
		for (i = 0; i >= 0; i++)
		{
			if (*(s1 + i) == *(s2 + i))
			{
				continue;
			}
			else
			{
				a = *(s1 + i);
				b = *(s2 + i);
				diff = a - b;
				break;
			}
		}
	}
	return (diff);
}
