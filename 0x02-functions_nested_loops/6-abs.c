/**
 * _abs- removes sign of number
 * @i: number to remove sign
 *
 * Return: absolute value of number
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (0 - i);
	}
	else
	{
		return (i);
	}
}
