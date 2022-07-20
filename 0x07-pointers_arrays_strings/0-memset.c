/**
 * _memset - fills memory with constant byte
 * @s: pointer to memory
 * @b: contant byte
 * @n: n of bytes to fill
 *
 * Return: pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
