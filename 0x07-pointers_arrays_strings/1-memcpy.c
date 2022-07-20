/**
 * _memcpy - copies memory area
 * @dest: pointer to variable to copy to
 * @src: pointer to variable to copy from
 * @n: n bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
