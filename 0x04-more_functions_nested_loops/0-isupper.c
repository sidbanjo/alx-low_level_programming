/**
 * _isupper- Checks for upper case character
 * @c: variable to check
 *
 * Return: 1 if upper case, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
