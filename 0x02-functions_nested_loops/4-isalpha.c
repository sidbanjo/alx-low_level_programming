/**
 * _isalpha - checks for alphabets
 * @c: variable to check if alphabet
 *
 * Return: 1 if alphabet otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
