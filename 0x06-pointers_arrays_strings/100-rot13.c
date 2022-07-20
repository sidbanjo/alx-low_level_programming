/**
 * rot13 - encode string with rot13
 * @s: string to encode
 *
 * Return: pointer to string
 */
char *rot13(char *s)
{
	char dict[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int r;
	int c;

	for (c = 0; *(s + c) != '\0'; c++)
	{
		for (r = 0; *(dict + r) != '\0'; r++)
		{
			if (*(dict + r) == *(s + c))
			{
				*(s + c) = *(rot + r);
				break;
			}
		}
	}
	return (s);
}
