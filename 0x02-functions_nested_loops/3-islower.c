/**
 * _islower - checks if argument is lower case
 * @c: variable to check if lower case
 *
 * Return: 1 if lower case otherwise 0
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
