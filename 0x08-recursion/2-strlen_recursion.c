/**
 * _strlen_recursion - calculates length of string
 * @s: string
 *
 * Return: rwturn length of string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*(s + 0))
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
