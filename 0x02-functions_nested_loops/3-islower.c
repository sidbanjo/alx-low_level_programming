/**
 * _islower - checks if argument is lower case
 *
 * Returm: 1 if lower case otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
